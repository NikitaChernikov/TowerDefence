using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [System.NonSerialized] public static bool GameIsOver;

    [SerializeField] private GameObject gameOverUI;
    [SerializeField] private GameObject victoryUI;
    [SerializeField] private GameObject spawner;

    private GameStateSounds sounds;

    private void Start()
    {
        Time.timeScale = 1;
        sounds = GameStateSounds.instance;
        GameIsOver = false;
    }

    private void Update()
    {
        if (GameIsOver) return;
        if (PlayerStats.Lives <= 0)
        {
            EndGame();
        }
    }

    public void Win()
    {
        Invoke("WinLevel", 2);
    }

    private void WinLevel()
    {
        Time.timeScale = 1;
        sounds.backgroundSound.Stop();
        sounds.gameWinSound.Play();
        PlayerPrefs.SetInt("LevelReached", SceneManager.GetActiveScene().buildIndex + 1);
        victoryUI.SetActive(true);
    }

    private void EndGame()
    {
        Time.timeScale = 1;
        spawner.SetActive(false);
        sounds.backgroundSound.Stop();
        sounds.gameOverSound.Play();
        GameIsOver = true;
        gameOverUI.SetActive(true);
    }

    
}
