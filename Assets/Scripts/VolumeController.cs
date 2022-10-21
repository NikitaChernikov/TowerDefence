using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class VolumeController : MonoBehaviour
{
    [SerializeField] private AudioMixer audioMixer;
    [SerializeField] private Sprite audioOn;
    [SerializeField] private Sprite audioOff;
    [SerializeField] private Button button;

    private bool isPlaying = true;

    private void Start()
    {
        if (PlayerPrefs.GetInt("Volume", 0) == 0)
        {
            audioMixer.SetFloat("volume", 0);
            button.image.sprite = audioOn;
            isPlaying = true;
        }
        else
        {
            audioMixer.SetFloat("volume", -80);
            button.image.sprite = audioOff;
            isPlaying = false;
        }
    }


    public void SoundOnOff()
    {
        if (isPlaying)
        {
            isPlaying = false;
            audioMixer.SetFloat("volume", -80);
            PlayerPrefs.SetInt("Volume", -80);
            button.image.sprite = audioOff;
        }
        else
        {
            isPlaying = true;
            audioMixer.SetFloat("volume", 0);
            PlayerPrefs.SetInt("Volume", 0);
            button.image.sprite = audioOn;
        }
    }
}
