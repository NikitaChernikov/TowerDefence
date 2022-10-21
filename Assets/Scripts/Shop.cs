using UnityEngine;

public class Shop : MonoBehaviour
{
    [SerializeField] private TurretBlueprint standartTurret;
    [SerializeField] private TurretBlueprint missileTurret;
    [SerializeField] private TurretBlueprint laserTurret;
    private BuildManager buildManager;

    private void Start()
    {
        buildManager = BuildManager.instance;
    }

    public void SelectStandartTurret()
    {
        Debug.Log("Standart turret selected");
        buildManager.SelectTurretToBuild(standartTurret);
    }

    public void SelectMissileTurret()
    {
        Debug.Log("Missile turret selected");
        buildManager.SelectTurretToBuild(missileTurret);
    }

    public void SelectLaserTurret()
    {
        Debug.Log("Laser turret selected");
        buildManager.SelectTurretToBuild(laserTurret);
    }
}
