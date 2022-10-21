using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WaveSpawner : MonoBehaviour
{
    [System.NonSerialized] public static int enemiesAlive = 0;

    [SerializeField] private Wave[] waves;
    [SerializeField] private float timebetweenWaves = 5f;
    [SerializeField] private Text waveCountdownText;
    [SerializeField] private GameManager gameManager;

    private float countdown = 2f;
    private int waveIndex = 0;

    private void Start()
    {
        enemiesAlive = 0;
    }

    private void Update()
    {
        if (enemiesAlive > 0)
        {
            return;
        }

        if (waveIndex == waves.Length)
        {
            gameManager.Win();
            this.enabled = false;
        }

        if (countdown <= 0f)
        {
            StartCoroutine(SpawnWave());
            countdown = timebetweenWaves;
            return;
        }

        countdown -= Time.deltaTime;
        countdown = Mathf.Clamp(countdown, 0f, Mathf.Infinity);
        waveCountdownText.text = string.Format("{0:00}", countdown);
    }

    private IEnumerator SpawnWave()
    {
        PlayerStats.Waves++;

        Wave wave = waves[waveIndex];

        enemiesAlive = wave.count;

        for (int i = 0; i < wave.count; i++)
        {
            SpawnEnemy(wave.enemy);
            yield return new WaitForSeconds(1f / wave.rate);
        }
        waveIndex++;
    }

    private void SpawnEnemy(GameObject enemy)
    {
        Instantiate(enemy, transform.position, enemy.transform.rotation);
    }
}
