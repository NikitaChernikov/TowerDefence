using UnityEngine;
using UnityEngine.UI;

public class GameSpeedShanger : MonoBehaviour
{
    [SerializeField] private Sprite normalSpeed;
    [SerializeField] private Sprite boostedSpeed;
    [SerializeField] private Button button;

    private bool isBoosted = false;

    private void Start()
    {
        button.image.sprite = normalSpeed;
    }

    public void ChangeGameSpeed()
    {
        if (isBoosted)
        {
            isBoosted = false;
            Time.timeScale = 1;
            button.image.sprite = normalSpeed;
        }
        else
        {
            isBoosted = true;
            Time.timeScale = 2;
            button.image.sprite = boostedSpeed;
        }
    }
}
