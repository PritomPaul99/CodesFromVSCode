#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; // n is the number of vertices, m is the number of edges

    vector<vector<int>> graph(n); // initialize the graph with n vertices

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2; // read the vertices that are connected by the edge

        graph[v1].push_back(v2); // add v2 to the list of vertices connected to v1
        graph[v2].push_back(v1); // add v1 to the list of vertices connected to v2 (for undirected graph)
    }

    // now the graph is created and stored in vector<vector<int>> graph
    return 0;
}
