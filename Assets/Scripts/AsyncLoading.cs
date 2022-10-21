using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class AsyncLoading : MonoBehaviour
{
    public static AsyncLoading asyncLoadingInstance;

    [SerializeField] private GameObject canvas;
    [SerializeField] private Text textField;

    private void Start()
    {
        asyncLoadingInstance = this;
    }

    public void LoadLevel(int level)
    {
        canvas.SetActive(true);
        StartCoroutine(WaitScene(level));
    }

    private IEnumerator WaitScene(int index)
    {
        // Загружаем сцену не закрывая текущую
        AsyncOperation loadScene = SceneManager.LoadSceneAsync(index);
        // Запрещаем активацию новой сцены, даже если она прогрузилась
        loadScene.allowSceneActivation = false;
        while (!loadScene.isDone)
        {
            //если сцена загружена на 90%
            if (loadScene.progress >= .9f)
            {
                //Включаем надпись
                textField.text = "TAP THE SCREEN TO CONTINUE";
                //И если игрок нажмет любую кнопку
                if (Input.anyKeyDown)
                {
                    //снимаем запрет на включение новой сцены
                    loadScene.allowSceneActivation = true;
                }
            }
            yield return null;
        }
    }
}
