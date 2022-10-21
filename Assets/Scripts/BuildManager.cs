using UnityEngine;

public class BuildManager : MonoBehaviour
{
    [SerializeField] private NodeUI nodeUI;

    public GameObject buildEffect;
    public GameObject sellEffect;

    public static BuildManager instance;

    private TurretBlueprint turretToBuild;
    private Node selectedNode;

    public bool CanBuild { get { return turretToBuild != null; } }
    public bool HasMoney { get { return PlayerStats.Money >= turretToBuild.cost; } }

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogError("More than one Build Manager on the scene");
            return;
        }
        instance = this;
    }

    public TurretBlueprint GetTurretBlueprint()
    {
        return turretToBuild;
    }

    public void SelectTurretToBuild(TurretBlueprint turret)
    {
        turretToBuild = turret;
        DeselectNode();
    }
    public void SelectNode(Node node)
    {
        if (selectedNode == node)
        {
            DeselectNode();
            return;
        }
        selectedNode = node;
        turretToBuild = null;
        nodeUI.SetTarget(selectedNode);
    }

    public void DeselectNode()
    {
        selectedNode = null;
        nodeUI.Hide();
    }
}
