
/*
    *Representation:-
        1) Matrix Representation
        2) Adjacent List representation
            --> Arrays of vector
            --> Vector of vector
    *Traversal:-
        1) DFS - Depth First Search
        2) BSF Breath First Search
    *Algorithms:-
        1) Dijkstra - Shortest path algo. Shortest path from a single source to multiple sources
        2) Bellmen ford - Shortest path algo. Shortest path from multiple sources to multiple sources
        3) Disjoint Set Union
        4) Minimum Spanning Tree
        5) Directed acyclic graph
        6) Topological Sort


    *Notes:-
        --> If a tree has N nodes, than it will have N-1 edges.
        -->
*/

//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;

int graph1[N][N];
vector<int> graph2[N];
int graph3[N][N];
vector<pair<int, int>> graph4[N];

void graphMatrix_UW()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;

        // O(N^2) - space complexity
        // Max size can be N = 10^3
    }
}

void graphList_UW()
{
    // Reduces space complexity, O(V + E)
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);

        // Space complexity --> O(N + M)
        // Edges
    }
}

void graphMatrix_W()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2;

        for (int i = 0; i < n; i++)
        {
            graph3[v1][v2] = w;
            graph3[v2][v1] = w;
        }
    }
}

void graphList_W()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;

        graph4[v1].push_back({v2, w});
        graph4[v2].push_back({v1, w});
    }
    
}

int main()
{
    // graphMatrix_UW();
    // graphList_UW();
    // graphMatrix_W()
    // graphList_W()
    return 0;
}
