using UnityEngine;
using UnityEngine.UI;

public class MoneyUI : MonoBehaviour
{
    [SerializeField] private Text moneyText;
    public static MoneyUI moneyUIinstance;

    private void Start()
    {
        moneyUIinstance = this;
    }

    public void GetMoney()
    {
        moneyText.text = PlayerStats.Money.ToString();
    }
}
