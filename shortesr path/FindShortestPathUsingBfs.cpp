#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addNode(int src, int des, int weight, bool direction)
    {
        // direction -> 0 means un-directed
        // direction -> 1 means directed

        adjList[src].push_back({des, weight});

        if (direction == 0)
        {
            adjList[des].push_back({src, weight});
        }
    }
    void printList()
    {

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
    void shortestPathUsingBfs(int src, int des)
    {
        queue<int> q;
        unordered_map<int, bool> visites;
        unordered_map<int, int> parent;

        q.push(src);
        visites[src] = true;
        parent[src] = -1;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            for (auto nbr : adjList[frontNode])
            {
                if (!visites[nbr.first])
                {
                    q.push(nbr.first);
                    visites[nbr.first] = true;
                    parent[nbr.first] = frontNode;
                }
            }
        }
        stack<int> ans;

        int node = des;

        while (node != -1)
        {
            ans.push(node);
            node = parent[node];
        }
        cout << "Print Shortest Path :" << endl;

        while (!ans.empty())
        {
            cout << ans.top() << " -> ";
            ans.pop();
        }
    }
};
int main()
{
    Graph obj;

    obj.addNode(0, 1, 1, 1);
    obj.addNode(0, 2, 1, 1);
    obj.addNode(0, 3, 1, 1);
    obj.addNode(1, 4, 1, 1);
    obj.addNode(1, 5, 1, 1);
    obj.addNode(2, 6, 1, 1);
    obj.addNode(2, 7, 1, 1);
    obj.addNode(3, 8, 1, 1);
    obj.addNode(4, 9, 1, 1);
    obj.addNode(5, 10, 1, 1);
    obj.addNode(5, 11, 1, 1);
    obj.addNode(6, 15, 1, 1);
    obj.addNode(7, 15, 1, 1);
    obj.addNode(8, 16, 1, 1);
    obj.addNode(9, 14, 1, 1);
    obj.addNode(10, 12, 1, 1);
    obj.addNode(11, 13, 1, 1);
    obj.addNode(15, 17, 1, 1);
    obj.addNode(16, 20, 1, 1);
    obj.addNode(14, 21, 1, 1);
    obj.addNode(12, 21, 1, 1);
    obj.addNode(13, 21, 1, 1);
    obj.addNode(17, 18, 1, 1);
    obj.addNode(17, 19, 1, 1);
    obj.addNode(18, 21, 1, 1);
    obj.addNode(19, 21, 1, 1);

    obj.printList();

    obj.shortestPathUsingBfs(0,21);
    return 0;
}