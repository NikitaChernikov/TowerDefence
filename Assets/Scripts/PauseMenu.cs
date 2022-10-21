using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    [SerializeField] GameObject pauseUI;

   public void Toggle()
    {
        pauseUI.SetActive(!pauseUI.activeSelf);
        if (pauseUI.activeSelf)
        {
            Time.timeScale = 0f;
        }
        else
        {
            Time.timeScale = 1;
        }
    }

    public void Restart()
    {
        Toggle();
        AsyncLoading.asyncLoadingInstance.LoadLevel(SceneManager.GetActiveScene().buildIndex);
    }

    public void MainMenu()
    {
        AsyncLoading.asyncLoadingInstance.LoadLevel(0);
    }
}
