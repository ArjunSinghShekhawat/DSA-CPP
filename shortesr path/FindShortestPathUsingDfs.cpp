#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addNode(int src, int dest, int weight, bool direction)
    {
        adjList[src].push_back({dest, weight});

        if (direction == 0)
        {
            adjList[dest].push_back({src, weight});
        }
    }
    void print()
    {

        cout << "Adjacency List :" << endl;

        for (auto node : adjList)
        {
            cout << node.first << " ->";
            for (auto nbr : node.second)
            {
                cout << "(" << nbr.first << "," << nbr.second << ")";
            }
            cout << endl;
        }
    }
    void topologicalSort(int src, unordered_map<int, bool> &visited, stack<int> &ans)
    {
        visited[src] = true;
        for (auto nbr : adjList[src])
        {
            if (!visited[nbr.first])
            {
                topologicalSort(nbr.first, visited, ans);
            }
        }
        ans.push(src);
    }
    void shortPath(int n, int dest, stack<int> ans)
    {
        vector<int> dist(n, INT32_MAX);

        int src = ans.top();
        ans.pop();
        dist[src] = 0;

        for (auto nbr : adjList[src])
        {
            if (src + nbr.second < dist[nbr.first])
            {
                dist[nbr.first] = src + nbr.second;
            }
        }
        while (!ans.empty())
        {
            int frontNode = ans.top();
            ans.pop();

            if (dist[frontNode] != INT32_MAX)
            {
                for (auto nbr : adjList[frontNode])
                {
                    if (dist[frontNode] + nbr.second < dist[nbr.first])
                    {
                        dist[nbr.first] = dist[frontNode] + nbr.second;
                    }
                }
            }
        }
        cout << "Shortest Distance :" << endl;

        for (int i = 0; i < dist.size(); i++)
        {
            cout << i << " -> " << dist[i] << endl;
        }
        cout << endl;
    }
};
int main()
{
    Graph obj;

    obj.addNode(0, 1, 1, 1);
    obj.addNode(0, 2, 2, 1);
    obj.addNode(0, 3, 3, 1);
    obj.addNode(1, 4, 2, 1);
    obj.addNode(2, 6, 6, 1);
    obj.addNode(2, 7, 2, 1);
    obj.addNode(3, 11, 6, 1);
    obj.addNode(4, 5, 8, 1);
    obj.addNode(6, 8, 1, 1);
    obj.addNode(7, 8, 3, 1);
    obj.addNode(11, 12, 2, 1);
    obj.addNode(11, 13, 9, 1);
    obj.addNode(5, 18, 12, 1);
    obj.addNode(18, 20, 12, 1);
    obj.addNode(8, 9, 2, 1);
    obj.addNode(9, 10, 2, 1);
    obj.addNode(10, 19, 1, 1);
    obj.addNode(19, 20, 3, 1);
    obj.addNode(12, 14, 1, 1);
    obj.addNode(12, 15, 3, 1);
    obj.addNode(14, 16, 1, 1);
    obj.addNode(15, 16, 2, 1);
    obj.addNode(16, 20, 2, 1);
    obj.addNode(13, 17, 4, 1);
    obj.addNode(17, 20, 8, 1);

    int num = 21;
    int dest = 20;
    stack<int> ans;

    unordered_map<int, bool> visited1;

    obj.topologicalSort(0, visited1, ans);

    cout << "Size of stack :" << ans.size() << endl;

    obj.shortPath(num, dest, ans);

    obj.print();
    return 0;
}