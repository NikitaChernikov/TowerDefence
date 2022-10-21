using UnityEngine;

public class MainMenu : MonoBehaviour
{
    [SerializeField] private GameObject mainMenu;
    [SerializeField] private GameObject levelsMenu;

    private void Start()
    {
        Time.timeScale = 1;
    }
    public void StartGame()
    {
        AsyncLoading.asyncLoadingInstance.LoadLevel(PlayerPrefs.GetInt("LevelReached"));
    }

    public void ExitGame()
    {
        Application.Quit();
    }

    public void SwitchMenu()
    {
        if (mainMenu.activeSelf)
        {
            mainMenu.SetActive(false);
            levelsMenu.SetActive(true);
        }
        else
        {
            mainMenu.SetActive(true);
            levelsMenu.SetActive(false);
        }
    }
}
