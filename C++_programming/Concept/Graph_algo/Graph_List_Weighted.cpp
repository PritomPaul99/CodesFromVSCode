//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 3;
vector<pair<int, int>> graph[N];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;

        graph[v1].push_back({v2, wt});
        graph[v2].push_back({v1, wt});
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << ": ";
        for (auto &&it : graph[i])
        {
            cout << "(" << it.first << ", " <<"<"<< it.second<<">" << "), ";
        }
        cout << endl;
    }

    return 0;
}
