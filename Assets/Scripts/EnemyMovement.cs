using UnityEngine;
using UnityEngine.Animations; //перенести в др скрипт


[RequireComponent(typeof(Enemy))]
public class EnemyMovement : MonoBehaviour
{
    private IConstraint constraint; //перенести в др скрипт
    private ConstraintSource source; //перенести в др скрипт
    private Transform target;
    private int wavePointIndex = 0;
    private Enemy enemy;
    private GameStateSounds sound;

    private void Awake()
    {
        constraint = GetComponentInChildren<RotationConstraint>(); //перенести в др скрипт
        enemy = GetComponent<Enemy>();
    }

    private void Start()
    {
        sound = GameStateSounds.instance;
        source.sourceTransform = GameObject.FindGameObjectWithTag("Source").transform; //перенести в др скрипт
        source.weight = 1; //перенести в др скрипт
        constraint.AddSource(source); //перенести в др скрипт
        target = Waypoints.wayPoints[0];
    }

    private void Update()
    {
        if (enemy.isDead) return;
        Vector3 dir = target.position - transform.position;
        transform.Translate(dir.normalized * enemy.speed * Time.deltaTime, Space.World);
        transform.LookAt(target);
        if (Vector3.Distance(transform.position, target.position) <= 0.2f)
        {
            GetNextWaypoint();
        }

        enemy.speed = enemy.startSpeed;
    }

    private void GetNextWaypoint()
    {
        if (wavePointIndex >= Waypoints.wayPoints.Length - 1)
        {
            EndPath();
            return;
        }
        wavePointIndex++;
        target = Waypoints.wayPoints[wavePointIndex];
    }

    private void EndPath()
    {
        sound.missLifeSound.Play();
        PlayerStats.Lives--;
        WaveSpawner.enemiesAlive--;
        Destroy(gameObject);
        LivesUI.livesUIinstance.MissLife();
    }
}
