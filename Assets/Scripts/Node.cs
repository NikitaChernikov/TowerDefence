using UnityEngine;
using System.Collections;

public class Node : MonoBehaviour
{

    //[SerializeField] private Color nodePressedColor;
    [SerializeField] private Vector3 positionOffset;
    [SerializeField] private GameObject notEnoughGoldText;

    [System.NonSerialized] public GameObject turret;
    [System.NonSerialized] public TurretBlueprint turretBlueprint;
    [System.NonSerialized] public bool isUpgraded = false;

    private BuildManager buildManager;

    private void Start()
    {
        buildManager = BuildManager.instance;
    }

    public Vector3 GetBuildPosition()
    {
        return transform.position + positionOffset;
    }

    private void BuildTurret(TurretBlueprint blueprint)
    {
        if (PlayerStats.Money < blueprint.cost)
        {
            Debug.Log("Not enough gold");
            StartCoroutine(NotEnoughGold());
            Shop.selected = false;
            return;
        }
        PlayerStats.Money -= blueprint.cost;
        GameObject _turret = Instantiate(blueprint.prefab, GetBuildPosition(), Quaternion.identity);
        turret = _turret;
        turretBlueprint = blueprint;
        GameObject effect = Instantiate(buildManager.buildEffect, GetBuildPosition(), Quaternion.identity);
        Destroy(effect, 5);
        MoneyUI.moneyUIinstance.GetMoney();
        Shop.selected = false;
    }

    public void UpgradeTurret()
    {
        if (PlayerStats.Money < turretBlueprint.upgradeCost)
        {
            Debug.Log("Not enough gold to upgrade");
            StartCoroutine(NotEnoughGold());
            return;
        }
        PlayerStats.Money -= turretBlueprint.upgradeCost;
        Destroy(turret);
        GameObject _turret = Instantiate(turretBlueprint.upgradedPrefab, GetBuildPosition(), Quaternion.identity);
        turret = _turret;
        GameObject effect = Instantiate(buildManager.buildEffect, GetBuildPosition(), Quaternion.identity);
        Destroy(effect, 5);
        isUpgraded = true;
        MoneyUI.moneyUIinstance.GetMoney();
    }

    public void SellTurret()
    {
        PlayerStats.Money += turretBlueprint.GetSellCost();
        GameObject effect = Instantiate(buildManager.sellEffect, GetBuildPosition(), Quaternion.identity);
        Destroy(effect, 5);
        Destroy(turret);
        turretBlueprint = null;
        MoneyUI.moneyUIinstance.GetMoney();
    }

    public void MouseDown()
    {

        //rend.material.color = nodePressedColor; //добавить после того как будет выбор башен

        if (turret != null)
        {
            buildManager.SelectNode(this);
            return;
        }

        if (!buildManager.CanBuild) 
            return;

        BuildTurret(buildManager.GetTurretBlueprint());
        BuildManager.instance.DeselectTurret();
        //Destroy(flagOnNode);
    }

    private IEnumerator NotEnoughGold()
    {
        notEnoughGoldText.SetActive(true);
        yield return new WaitForSeconds(1f);
        notEnoughGoldText.SetActive(false);
    }
}
