#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addList(int src, int des, bool direction)
    {
        // direction - 0 means undirected
        // direction - 1 means directed
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

            for (auto nbr : node.second)
            {
                cout << nbr << " ";
            }
            cout << endl;
        }
    }
    void topologicalSortUsingBreathForSearch(int n, vector<int> &ans)
    {
        unordered_map<int, int> inOrdered_degree;
        queue<int> q;

        for (auto i : adjList)
        {
            int src = i.first;
            for (auto nbr : i.second)
            {
                inOrdered_degree[nbr]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (inOrdered_degree[i] == 0)
            {
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            ans.push_back(frontNode);

            for (auto nbr : adjList[frontNode])
            {
                inOrdered_degree[nbr]--;

                if (inOrdered_degree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
    }
};
int main()
{
    Graph obj;
    int n = 5;

    obj.addList(0, 1, 1);
    obj.addList(0, 2, 1);
    obj.addList(2, 3, 1);
    obj.addList(4, 2, 1);
    obj.addList(3, 4, 1);
    // obj.addList(6, 7, 1);
    // obj.addList(7, 0, 1);
    // obj.addList(7, 1, 1);

    obj.print();

    cout << "Topological sort Using Breath First Search :" << endl;

    unordered_map<int, bool> visited;
    stack<int> st;
    vector<int> ans;
    obj.topologicalSortUsingBreathForSearch(n, ans);

    cout << "Printing topological sort :" << endl;

    for (auto val : ans)
    {
        cout << val << " ";
    }
 
    return 0;
}