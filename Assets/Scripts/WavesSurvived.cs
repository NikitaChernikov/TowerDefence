using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WavesSurvived : MonoBehaviour
{
    [SerializeField] private Text wavesText;

    private void OnEnable()
    {
        StartCoroutine(AnimateText());
    }

    IEnumerator AnimateText()
    {
        wavesText.text = "0";
        int wave = 0;
        yield return new WaitForSeconds(1.5f);
        while(wave < PlayerStats.Waves)
        {
            wave++;
            wavesText.text = wave.ToString();

            yield return new WaitForSeconds(0.05f);
        }
    }
}
