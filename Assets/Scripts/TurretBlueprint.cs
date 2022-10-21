using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class TurretBlueprint
{
    public GameObject prefab;
    public int cost;
    public GameObject upgradedPrefab;
    public int upgradeCost;
    public Image image;
    public Button button;

    public int GetSellCost()
    {
        return cost / 2;
    }
}
