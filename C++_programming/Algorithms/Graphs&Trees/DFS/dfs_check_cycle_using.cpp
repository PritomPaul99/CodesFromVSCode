/**
 * @file dfs.cpp
 * @author Pritom Paul (pritompaul1920@gmail.com)
 * @brief Joker
 * @version 0.1
 * @date 2023-02-06
 */
#include <bits/stdc++.h>

using namespace std;

const int N = 1e3;

vector<vector<int>> graph(N);
vector<bool> vis(N);

bool dfs(int vertex, int par)
{
    cout << vertex << endl;
    //* take action on vertex after entering the vertex.

    vis[vertex] = true;
    for (int child : graph[vertex])
    {
        //* Take action on child before entering the child.
        cout << "Parent: " << vertex << " Child: " << child << endl;
        if (!vis[child])
        {
            dfs(child, vertex);
        }
        else if ((vis[child]) && (child == par))
        {
            return true;
        }
        //* Take action on child after exiting the child.
    }
    //* Take acton on vertex before exiting the vertex.
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
        // graph[v2].push_back(v1);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (auto &&it : graph[i])
        {
            cout << it << ", ";
        }
        cout << endl;
    }

    dfs(1);
    return 0;
}

/**
DFS (Depth First Search) is an algorithm used for traversing and searching a graph or tree data structure. It involves exploring all the vertices of a graph by moving deeper into a tree as much as possible before backtracking and visiting other vertices.

Some common use cases of DFS include:
    * Finding a path between two vertices in a graph
    * Topological sorting of a directed acyclic graph (DAG)
    * Detecting cycles in a graph
    * Solving problems that require searching and visiting all vertices of a graph,
      such as finding connected components and computing strongly connected components in a directed graph.

Complexity: O(V + E)
*/
