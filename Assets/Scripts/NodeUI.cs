using UnityEngine;
using UnityEngine.UI;

public class NodeUI : MonoBehaviour
{
    [SerializeField] private GameObject nodeUI;
    [SerializeField] private Text upgradeCost;
    [SerializeField] private Button upgradeButton;
    [SerializeField] private Text sellCost;
    private Node target;

    public void SetTarget(Node _target)
    {
        Shop.selected = false;
        target = _target;
        transform.position = target.GetBuildPosition();
        if (!target.isUpgraded)
        {
            upgradeCost.text = target.turretBlueprint.upgradeCost + " GOLD";
            upgradeButton.interactable = true;
        }
        else
        {
            upgradeButton.interactable = false;
            upgradeCost.text = "DONE";
        }

        sellCost.text = target.turretBlueprint.GetSellCost() + " GOLD";

        nodeUI.SetActive(true);
    }

    public void Hide()
    {
        nodeUI.SetActive(false);
    }

    public void Sell()
    {
        target.SellTurret();
        BuildManager.instance.DeselectNode();
    }

    public void Upgrade()
    {
        target.UpgradeTurret();
        BuildManager.instance.DeselectNode();
    }
}
