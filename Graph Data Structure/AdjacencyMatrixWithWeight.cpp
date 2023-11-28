#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node;

    cout << "Entre the number of node :" << endl;
    cin >> node;

    int edges;

    cout << "Enter the number of edges :" << endl;
    cin >> edges;

    vector<vector<int>> adjMatrix(node, vector<int>(node, 0));

    for (int i = 0; i < edges; i++)
    {
        int src, des,weight;
        cin >> src >> des>>weight;

        adjMatrix[src][des] = weight;
    }
    cout << "Adjacency Matrix With Weight:" << endl;

    for (int i = 0; i < adjMatrix.size(); i++)
    {
        for (int j = 0; j < adjMatrix[i].size(); j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}