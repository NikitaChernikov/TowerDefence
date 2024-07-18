using UnityEngine;

public class CameraController : MonoBehaviour
{
    [SerializeField] private Camera _camera;
    [SerializeField] private bool _rotate;

    [Header("Borders")]
    [SerializeField] private float _minZoom = 10f; // Минимальный зум
    [SerializeField] private float _maxZoom = 50f; // Максимальный зум
    [SerializeField] private Vector3 _minPosition; // Минимальная позиция камеры
    [SerializeField] private Vector3 _maxPosition; // Максимальная позиция камеры

    private Plane _plane;

    private void Awake()
    {
        if (_camera == null)
            _camera = Camera.main;
    }

    private void Update()
    {
        if (GameManager.GameIsOver)
        {
            this.enabled = false;
            return;
        }

        // Update Plane
        if (Input.touchCount >= 1)
            _plane.SetNormalAndPosition(transform.up, transform.position);

        var delta1 = Vector3.zero;

        // Scroll
        if (Input.touchCount >= 1)
        {
            delta1 = PlanePositionDelta(Input.GetTouch(0));
            if (Input.GetTouch(0).phase == TouchPhase.Moved)
            {
                _camera.transform.Translate(delta1, Space.World);
                _camera.transform.position = ClampCameraPosition(_camera.transform.position);
            }
        }

        // Pinch
        if (Input.touchCount >= 2)
        {
            var pos1 = PlanePosition(Input.GetTouch(0).position);
            var pos2 = PlanePosition(Input.GetTouch(1).position);
            var pos1b = PlanePosition(Input.GetTouch(0).position - Input.GetTouch(0).deltaPosition);
            var pos2b = PlanePosition(Input.GetTouch(1).position - Input.GetTouch(1).deltaPosition);

            // Calculate zoom
            var zoom = Vector3.Distance(pos1, pos2) / Vector3.Distance(pos1b, pos2b);

            // Edge case
            if (zoom == 0 || zoom > 10)
                return;

            // Move camera along the mid ray
            _camera.transform.position = Vector3.LerpUnclamped(pos1, _camera.transform.position, 1 / zoom);
            _camera.transform.position = ClampCameraPosition(_camera.transform.position);

            // Limit zoom
            float currentZoom = Vector3.Distance(_camera.transform.position, transform.position); // изменение для корректного расчета
            if (currentZoom < _minZoom)
            {
                _camera.transform.position = pos1 + (_camera.transform.position - pos1).normalized * _minZoom;
            }
            else if (currentZoom > _maxZoom)
            {
                _camera.transform.position = pos1 + (_camera.transform.position - pos1).normalized * _maxZoom;
            }

            if (_rotate && pos2b != pos2)
                _camera.transform.RotateAround(pos1, _plane.normal, Vector3.SignedAngle(pos2 - pos1, pos2b - pos1b, _plane.normal));
        }
    }

    private Vector3 PlanePositionDelta(Touch touch)
    {
        // Not moved
        if (touch.phase != TouchPhase.Moved)
            return Vector3.zero;

        // Delta
        var rayBefore = _camera.ScreenPointToRay(touch.position - touch.deltaPosition);
        var rayNow = _camera.ScreenPointToRay(touch.position);
        if (_plane.Raycast(rayBefore, out var enterBefore) && _plane.Raycast(rayNow, out var enterNow))
            return rayBefore.GetPoint(enterBefore) - rayNow.GetPoint(enterNow);

        // Not on plane
        return Vector3.zero;
    }

    private Vector3 PlanePosition(Vector2 screenPos)
    {
        // Position
        var rayNow = _camera.ScreenPointToRay(screenPos);
        if (_plane.Raycast(rayNow, out var enterNow))
            return rayNow.GetPoint(enterNow);

        return Vector3.zero;
    }

    private Vector3 ClampCameraPosition(Vector3 position)
    {
        float clampedX = Mathf.Clamp(position.x, _minPosition.x, _maxPosition.x);
        float clampedY = Mathf.Clamp(position.y, _minPosition.y, _maxPosition.y);
        float clampedZ = Mathf.Clamp(position.z, _minPosition.z, _maxPosition.z);
        return new Vector3(clampedX, clampedY, clampedZ);
    }

    private void OnDrawGizmos()
    {
        Gizmos.DrawLine(transform.position, transform.position + transform.up);
    }
}
