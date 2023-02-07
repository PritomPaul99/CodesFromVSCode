//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define nl '\n';

const int N = 1e3+3;

// vector<int> graph[N];
vector<vector<int>> graph(N);

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << ": ";
        for (auto &&it : graph[i])
        {
            cout << it << ", ";
        }
        cout << nl;
    }
    
    
    return 0;
}



