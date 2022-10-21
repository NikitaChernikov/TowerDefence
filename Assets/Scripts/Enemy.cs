using UnityEngine;
using UnityEngine.UI;

public class Enemy : MonoBehaviour
{
    public float startSpeed = 5f;

    [System.NonSerialized] public float speed;
    [System.NonSerialized] public bool isDead = false;

    [SerializeField] private float startHealth = 100;
    [SerializeField] private int worth = 50;

    private float health;
    private Animator anim;
    private AudioSource walkSound;

    [Header("Unity Stuff")]
    [SerializeField] private Image healthBar;
    [SerializeField] private GameObject healthUI;
    [SerializeField] private AudioSource deathSound;

    private void Awake()
    {
        anim = GetComponent<Animator>();
        walkSound = GetComponent<AudioSource>();
    }

    private void Start()
    {
        float pitch = Random.Range(0.8f, 1.2f);
        walkSound.pitch = pitch;
        health = startHealth;
        speed = startSpeed;
    }

    public void TakeDamage(float amount)
    {
        health -= amount;
        healthBar.fillAmount = health / startHealth;
        if (health <= 0 && !isDead)
        {
            transform.tag = "Dead";
            walkSound.Stop();
            Die();
        }
    }

    public void Slow(float rate)
    {
        speed = startSpeed * (1 - rate);
    }

    private void Die()
    {
        isDead = true;
        deathSound.Play();
        anim.SetTrigger("Die");
        healthUI.SetActive(false);
        PlayerStats.Money += worth;
        MoneyUI.moneyUIinstance.GetMoney();
        WaveSpawner.enemiesAlive--;
        Destroy(gameObject,2);
    }
}
