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
        // ��������� ����� �� �������� �������
        AsyncOperation loadScene = SceneManager.LoadSceneAsync(index);
        // ��������� ��������� ����� �����, ���� ���� ��� ������������
        loadScene.allowSceneActivation = false;
        while (!loadScene.isDone)
        {
            //���� ����� ��������� �� 90%
            if (loadScene.progress >= .9f)
            {
                //�������� �������
                textField.text = "TAP THE SCREEN TO CONTINUE";
                //� ���� ����� ������ ����� ������
                if (Input.anyKeyDown)
                {
                    //������� ������ �� ��������� ����� �����
                    loadScene.allowSceneActivation = true;
                }
            }
            yield return null;
        }
    }
}
