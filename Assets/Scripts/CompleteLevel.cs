using UnityEngine;

public class CompleteLevel : MonoBehaviour
{
    public void GoToMainMenu()
    {
        AsyncLoading.asyncLoadingInstance.LoadLevel(0);
    }

    public void Continue()
    {
        AsyncLoading.asyncLoadingInstance.LoadLevel(PlayerPrefs.GetInt("LevelReached"));
    }
}
