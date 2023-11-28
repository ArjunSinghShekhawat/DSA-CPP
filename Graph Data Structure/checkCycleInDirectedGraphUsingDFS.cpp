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
    bool checkCycleUsingDepthFirstSearch(int src, unordered_map<int, bool> &visited, unordered_map<int, bool> dfsVisited)
    {
        visited[src] = true;
        dfsVisited[src] = true;

        for (auto nbr : adjList[src])
        {
            if (!visited[nbr])
            {
                bool ans = checkCycleUsingDepthFirstSearch(nbr, visited, dfsVisited);
                if (ans == true)
                {
                    return true;
                }
            }
            else if (visited[nbr] == true && dfsVisited[nbr] == true)
            {
                return true;
            }
        }
        dfsVisited[src] = false;
        return false;
    }
};
int main()
{
    Graph obj;
    obj.addNode(0, 1, 1);
    obj.addNode(1, 2, 1);
    obj.addNode(1, 3, 1);
    obj.addNode(3, 4, 1);
    obj.addNode(1, 4, 1);

    obj.print();

    cout << "Check Cycle present or not in directed Grapg Using Depth First Search :" << endl;
    unordered_map<int, bool> visited1;
    bool ans = false;
    unordered_map<int, bool> dfsVisited;

    for (int i = 0; i < 11; i++)
    {
        if (!visited1[i])
        {
            ans = obj.checkCycleUsingDepthFirstSearch(i, visited1, dfsVisited);
            if (ans == true)
            {
                break;
            }
        }
    }
    if (ans)
    {
        cout << "Cycle is present :" << endl;
    }
    else
    {
        cout << "Cycle is not present :" << endl;
    }

    return 0;
}