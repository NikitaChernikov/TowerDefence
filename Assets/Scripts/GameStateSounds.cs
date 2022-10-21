using UnityEngine;

public class GameStateSounds : MonoBehaviour
{
    public static GameStateSounds instance;

    public AudioSource missLifeSound;
    public AudioSource gameOverSound;
    public AudioSource gameWinSound;
    public AudioSource backgroundSound;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogError("More than one GameStateSounds on the scene");
            return;
        }
        instance = this;
    }
}
