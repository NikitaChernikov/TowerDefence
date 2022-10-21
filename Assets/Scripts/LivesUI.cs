using UnityEngine;
using UnityEngine.UI;

public class LivesUI : MonoBehaviour
{
    [SerializeField] private Text livesText;

    public static LivesUI livesUIinstance;

    private void Start()
    {
        livesUIinstance = this;
    }

    public void MissLife()
    {
        livesText.text = PlayerStats.Lives + " CITIZENS";
    }
}
