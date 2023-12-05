#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>
#include <limits>
#include <list>
using namespace std;

class Graph
{
public:
     <int, list<pair<int, int>>> adjList;

    void addEdge(int src, int dest, int weight, bool direction)
    {
        // direction -> 0 means un-directed graph
        // direction -> 1 means directed graph

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
            cout << node.first << " -> ";
            for (auto nbr : node.second)
            {
                cout << "(" << nbr.first << "," << nbr.second << ")";
            }
            cout << endl;
        }
    }
    void dijkstraAlgoToFindOutShortestPath(int src, int n)
    {
        set<pair<int, int>> st;
        vector<int> dist(n, INT32_MAX);

        st.insert(make_pair(0, src));
        dist[src] = 0;

        while (!st.empty())
        {
            auto topElement = *(st.begin());
            int distance = topElement.first;
            int element = topElement.second;

            st.erase(st.begin());

            for (auto nbr : adjList[element])
            {
                if (distance + nbr.second < dist[nbr.first])
                {
                    auto result = st.find(make_pair(dist[nbr.first], nbr.first));
                    if (result != st.end())
                    {
                        st.erase(result);
                    }
                    dist[nbr.first] = distance + nbr.second;
                    st.insert(make_pair(dist[nbr.first], nbr.first));
                }
            }
        }

        cout << "Print Path :" << endl;

        for (int i = 0; i < n; i++)
        {
            cout << dist[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Graph obj;

    obj.addEdge(2, 0, 6, 0);
    obj.addEdge(2, 3, 8, 0);
    obj.addEdge(0, 1, 2, 0);
    obj.addEdge(3, 1, 5, 0);
    obj.addEdge(3, 4, 10, 0);
    obj.addEdge(3, 5, 15, 0);
    obj.addEdge(4, 6, 2, 0);
    obj.addEdge(5, 6, 6, 0);
    

    obj.print();

    obj.dijkstraAlgoToFindOutShortestPath(0,7);
    return 0;
}