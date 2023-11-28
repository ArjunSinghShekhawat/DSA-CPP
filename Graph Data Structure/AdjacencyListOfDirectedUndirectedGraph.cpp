#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addNode(int src, int des, bool direction)
    {
        // direction -> 1 directed
        // direction -> 0 un-directed

        adjList[src].push_back(des);

        if (direction == 0)
        {
            adjList[des].push_back(src);
        }
    }
    void print()
    {

        cout << "Adjacency List :" << endl;

        for (auto node : adjList)
        {
            cout << node.first << " ->";

            cout << "{ ";
            for (auto nbr : node.second)
            {
                cout << nbr<<" ";
            }
            cout << "}";
            cout << endl;
        }
    }
};
int main()
{
    Graph obj;

    obj.addNode(0, 1, 1);
    obj.addNode(1, 2, 1);
    obj.addNode(2, 3, 1);
    obj.addNode(3, 0, 1);

    obj.print();
    return 0;
}