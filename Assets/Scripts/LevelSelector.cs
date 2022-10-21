using UnityEngine;
using UnityEngine.UI;

public class LevelSelector : MonoBehaviour
{
    [SerializeField] private Button[] levelButtons;

    private void Start()
    {
        int levelReached = PlayerPrefs.GetInt("LevelReached", 1);
        for (int i = 0; i < levelButtons.Length; i++)
        {
            if (i + 1 > levelReached)
            {
                levelButtons[i].interactable = false;
            }
            else
            {
                levelButtons[i].GetComponentInChildren<Text>().text = (i+1).ToString();
            }
        }
    }

    public void Select(int levelIndex)
    {
        AsyncLoading.asyncLoadingInstance.LoadLevel(levelIndex);
    }
}
