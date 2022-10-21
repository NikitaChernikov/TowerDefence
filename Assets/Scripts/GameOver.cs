using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour
{
    public void Restart()
    {
        AsyncLoading.asyncLoadingInstance.LoadLevel(SceneManager.GetActiveScene().buildIndex);
    }

    public void GoToMainMenu()
    {
        AsyncLoading.asyncLoadingInstance.LoadLevel(0);
    }
}
