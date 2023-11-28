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
    void topologicalSortUsingDepthForSearch(int src, unordered_map<int, bool> &visited, stack<int> &st)
    {

        visited[src] = true;

        for (auto nbr : adjList[src])
        {
            if (!visited[nbr])
            {
                topologicalSortUsingDepthForSearch(nbr, visited, st); 
            }
        }
        st.push(src);
    }
};
int main()
{
    Graph obj;

    obj.addList(0, 1, 1);
    obj.addList(1, 2, 1);
    obj.addList(2, 3, 1);
    obj.addList(3, 4, 1);
    obj.addList(3, 5, 1);
    obj.addList(5, 6, 1);
    obj.addList(4, 6, 1);
    obj.addList(6, 7, 1);

    obj.print();

    cout << "Topological sort Using Depth First Search :" << endl;

    unordered_map<int, bool> visited;
    stack<int> st;
    obj.topologicalSortUsingDepthForSearch(0, visited, st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}