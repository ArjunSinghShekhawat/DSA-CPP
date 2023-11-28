#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addNode(int src, int des, int weight, bool direction)
    {
        // direction -> 1 directed
        // direction -> 0 un-directed

        adjList[src].push_back({des, weight});

        if (direction == 0)
        {
            adjList[des].push_back({src, weight});
        }
    }
    void print()
    {

        cout << "Adjacency List With Weight:" << endl;

        for (auto node : adjList)
        {
            cout << node.first << " ->";

            cout << "{";
            for (auto nbr : node.second)
            {
                cout << "(" << nbr.first << " " << nbr.second << ")";
            }
            cout << "}";
            cout << endl;
        }
    }
};
int main()
{
    Graph obj;

    obj.addNode(0, 1, 5, 0);
    obj.addNode(1, 2, 10, 0);
    obj.addNode(2, 3, 20, 0);
    obj.addNode(3, 0, 30, 0);

    obj.print();
    return 0;
}