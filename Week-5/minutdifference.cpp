#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<string> time{"12:10", "10:15", "13:15", "17:20", "18:00", "19:47", "23:59"};
    vector<string> time{"23:59", "00:00"};
    vector<int> minutesTime;

    for (int i = 0; i < time.size(); i++)
    {
        string curr = time[i];
        int hours = stoi(curr.substr(0, 2));
        int minutes = stoi(curr.substr(3, 2));
        int total_minutes = hours * 60 + minutes;
        minutesTime.push_back(total_minutes);
    }
    sort(minutesTime.begin(), minutesTime.end());

    for (auto val : minutesTime)
    {
        cout << val << " ";
    }
    int mini = INT32_MAX;

    for (int i = 0; i < minutesTime.size(); i++)
    {

        if (i + 1 < minutesTime.size() && mini > minutesTime[i + 1] - minutesTime[i])
        {
            mini = minutesTime[i + 1] - minutesTime[i];
        }
    }
    int lastMin = (minutesTime[0] + 1440) - minutesTime[minutesTime.size() - 1];

    mini = min(mini, lastMin);

    cout << "\nAnswer will be :" << mini << endl;
}