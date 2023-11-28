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

            cout << "{";
            for (auto nbr : node.second)
            {
                cout << nbr << ",";
            }
            cout << "}";
            cout << endl;
        }
    }
    void breathFirstSearch(int src, unordered_map<int, bool> &visited)
    {
        queue<int> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            cout << frontNode << " ";

            for (auto nbr : adjList[frontNode])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
};
int main()
{
    Graph obj;
    obj.addNode(0, 1, 0);
    obj.addNode(0, 2, 0);
    obj.addNode(0, 3, 0);
    obj.addNode(1, 4, 0);
    obj.addNode(1, 5, 0);
    obj.addNode(3, 8, 0);
    obj.addNode(3, 9, 0);
    obj.addNode(5, 6, 0);
    obj.addNode(5, 7, 0);
    obj.addNode(8, 10, 0);
    obj.addNode(9, 10, 0);

    obj.print();

    cout << "Breath First Search :" << endl;

    unordered_map<int, bool> visited1;

    for (int i = 0; i < 11; i++)
    {
        if (!visited1[i])
        {
            obj.breathFirstSearch(i, visited1);
        }
    }

    return 0;
}