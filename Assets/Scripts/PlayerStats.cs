using UnityEngine;

public class PlayerStats : MonoBehaviour
{
    public static int Money;
    public static int Lives;
    public static int Waves;

    [SerializeField] private int startMoney = 400;
    [SerializeField] private int startLives = 20;

    private void Start()
    {
        Money = startMoney;
        Lives = startLives;
        Waves = 0;
        MoneyUI.moneyUIinstance.GetMoney();
        LivesUI.livesUIinstance.MissLife();
    }
}
