using UnityEngine;

public class Shop : MonoBehaviour
{
    [SerializeField] private TurretBlueprint standartTurret;
    [SerializeField] private TurretBlueprint missileTurret;
    [SerializeField] private TurretBlueprint laserTurret;
    private BuildManager buildManager;

    public static bool selected;
    private Vector3 scaled;
    private Vector3 normalScale;

    private void Start()
    {
        scaled = new Vector3(0.2f, 0.2f, 0);
        normalScale = new Vector3(1, 1, 1);

        selected = false;
        buildManager = BuildManager.instance;
    }

    private void Update()
    {
        if (PlayerStats.Money < standartTurret.cost)
        {
            standartTurret.image.color = Color.gray;
        }
        else
        {
            standartTurret.image.color = Color.white;
        }
        if (PlayerStats.Money < missileTurret.cost)
        {
            missileTurret.image.color = Color.gray;
        }
        else
        {
            missileTurret.image.color = Color.white;
        }
        if (PlayerStats.Money < laserTurret.cost)
        {
            laserTurret.image.color = Color.gray;
        }
        else
        {
            laserTurret.image.color = Color.white;
        }

        if (selected == false)
        {
            standartTurret.button.transform.localScale = normalScale;
            missileTurret.button.transform.localScale = normalScale;
            laserTurret.button.transform.localScale = normalScale;
            standartTurret.button.interactable = true;
            missileTurret.button.interactable = true;
            laserTurret.button.interactable = true;
        }
    }

    public void SelectStandartTurret()
    {
        if (!selected)
        {
            buildManager.SelectTurretToBuild(standartTurret);
            selected = true;
            standartTurret.button.transform.localScale += scaled;

            missileTurret.button.transform.localEulerAngles -= scaled;
            missileTurret.button.interactable = false;
            laserTurret.button.transform.localEulerAngles -= scaled;
            laserTurret.button.interactable = false;

            Debug.Log("Standart turret selected");
        }
        else 
        {
            buildManager.DeselectTurret();
            selected = false;
            Debug.Log("Standart turret deselected");
        }
    }

    public void SelectMissileTurret()
    {
        if (!selected)
        {
            selected = true;
            Debug.Log("Missile turret selected");
            missileTurret.button.transform.localScale += scaled;

            standartTurret.button.transform.localEulerAngles -= scaled;
            standartTurret.button.interactable = false;
            laserTurret.button.transform.localEulerAngles -= scaled;
            laserTurret.button.interactable = false;

            buildManager.SelectTurretToBuild(missileTurret);
        }
        else
        {
            selected = false;
            Debug.Log("Missile turret deselected");
            buildManager.DeselectTurret();
        }
    }

    public void SelectLaserTurret()
    {
        if (!selected)
        {
            selected = true;
            Debug.Log("Laser turret selected");
            buildManager.SelectTurretToBuild(laserTurret);
            laserTurret.button.transform.localScale += scaled;

            standartTurret.button.transform.localEulerAngles -= scaled;
            standartTurret.button.interactable = false;
            missileTurret.button.transform.localEulerAngles -= scaled;
            missileTurret.button.interactable = false;
        }
        else
        {
            selected = false;
            Debug.Log("Laser turret deselected");
            buildManager.DeselectTurret();
        }
    }
}
