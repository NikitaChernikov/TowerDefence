using UnityEngine;

public class Turret : MonoBehaviour
{
    private Transform target;
    private Enemy targetEnemy;

    [Header("General")]
    [SerializeField] private float range = 15;

    [Header("Use cannonballs (default)")]
    [SerializeField] GameObject cannonballPrefab;
    [SerializeField] float fireRate = 1;
    private float fireCountdown = 0;

    [Header("Use lasers")]
    [SerializeField] private bool useLaser = false;
    [SerializeField] private LineRenderer lineRenderer;
    [SerializeField] private ParticleSystem impactEffect;
    [SerializeField] private Light impactLight;
    [SerializeField] private int damageOverTime = 30;
    [SerializeField] private float slowRate = 0.5f;
    [SerializeField] private AudioSource laserSound;

    [Header("Inspector Setup Fields")]
    [SerializeField] private string enemyTag = "Enemy";
    [SerializeField] Transform partToRotate;
    [SerializeField] float turnSpeed = 10f;
    [SerializeField] Transform firePoint;

    private void Start()
    {
        InvokeRepeating("UpdateTarget",0, 0.5f);
    }

    private void UpdateTarget()
    {
        GameObject[] enemies = GameObject.FindGameObjectsWithTag(enemyTag);
        float shortestDistance = Mathf.Infinity;
        GameObject nearestEnemy = null;
        foreach(GameObject enemy in enemies)
        {
            float distanceToEnemy = Vector3.Distance(transform.position, enemy.transform.position);
            if (distanceToEnemy < shortestDistance)
            {
                shortestDistance = distanceToEnemy;
                nearestEnemy = enemy;
            }
        }

        if (nearestEnemy != null && shortestDistance <= range)
        {
            target = nearestEnemy.transform;
            targetEnemy = nearestEnemy.GetComponent<Enemy>();
        }
        else
        {
            target = null;
        }
    }

    private void Update()
    {
        if (target == null)
        {
            if (useLaser)
            {
                if (lineRenderer.enabled)
                {
                    laserSound.Stop();
                    lineRenderer.enabled = false;
                    impactEffect.Stop();
                    impactLight.enabled = false;
                }
            }
            return;
        }
        LockOnTarget();
        if (useLaser)
        {
            Laser();
        }
        else
        {
            if (fireCountdown <= 0f)
            {
                Shoot();
                fireCountdown = 1 / fireRate;
            }
            fireCountdown -= Time.deltaTime;
        }
    }

    private void LockOnTarget()
    {
        Vector3 dir = target.position - transform.position;
        Quaternion lookRotation = Quaternion.LookRotation(dir);
        Vector3 rotation = Quaternion.Lerp(partToRotate.rotation, lookRotation, Time.deltaTime * turnSpeed).eulerAngles;
        partToRotate.rotation = Quaternion.Euler(0f, rotation.y, 0f);
    }

    private void Laser()
    {
        targetEnemy.TakeDamage(damageOverTime * Time.deltaTime);
        targetEnemy.Slow(slowRate);

        if (!lineRenderer.enabled)
        {
            laserSound.Play();
            lineRenderer.enabled = true;
            impactEffect.Play();
            impactLight.enabled = true;
        }
        lineRenderer.SetPosition(0, firePoint.position);
        lineRenderer.SetPosition(1, target.position);
        Vector3 dir = firePoint.position - target.position;
        impactEffect.transform.position = target.position + dir.normalized * 0.5f;
        impactEffect.transform.rotation = Quaternion.LookRotation(dir);
    }

    private void Shoot()
    {
        GameObject cannonballGO = Instantiate(cannonballPrefab, firePoint.position, firePoint.rotation);
        Cannonball cannonball = cannonballGO.GetComponent<Cannonball>();

        if (cannonball != null)
        {
            cannonball.Seek(target);
        }
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, range);
    }
}
