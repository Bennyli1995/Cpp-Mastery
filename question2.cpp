#include <string>
#include <list>
#include <iostream>

using namespace std;

struct LionDescription
{
    string name;
    int height;
};

struct LionSchedule
{
    string name;
    int enterTime;
    int exitTime;
};

class LionCompetition
{
public:
    LionCompetition(list<LionDescription> lions, list<LionSchedule> schedule)
    {
        /* Enter your code here. */
    }

    void lionEntered(int currentTime, int height)
    {
        /* Enter your code here. */
    }

    void lionLeft(int currentTime, int height)
    {
        /* Enter your code here. */
    }

    list<string> getBiggestLions()
    {
        /* Enter your code here. */
        return list<string>();
    }
};

int main()
{
    string operation;

    list<LionDescription> descriptions;
    list<LionSchedule> schedule;

    do
    {
        cin >> operation;

        if (operation == "definition")
        {
            string name;
            int size;
            cin >> name >> size;

            descriptions.push_back({name, size});
        }
        if (operation == "schedule")
        {
            string name;
            int enterTime;
            int exitTime;
            cin >> name >> enterTime >> exitTime;

            schedule.push_back({name, enterTime, exitTime});
        }
    } while (operation != "start");

    LionCompetition lionCompetition(descriptions, schedule);

    do
    {
        int currentTime;
        cin >> currentTime >> operation;

        if (operation == "enter")
        {
            int size;
            cin >> size;

            lionCompetition.lionEntered(currentTime, size);
        }
        if (operation == "exit")
        {
            int size;
            cin >> size;

            lionCompetition.lionLeft(currentTime, size);
        }
        if (operation == "inspect")
        {
            list<string> lions = lionCompetition.getBiggestLions();

            cout << lions.size();

            for (const string &name : lions)
            {
                cout << " " << name;
            }

            cout << "\n";
        }
    }
    while (operation != "end");

    return 0;
}