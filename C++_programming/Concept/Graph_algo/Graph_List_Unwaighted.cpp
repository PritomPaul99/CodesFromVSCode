//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;
vector<int> g[N];

int main()
{
    cout << "Enter N & M:-" << endl;
    int n, m;
    cin >> n >> m;

    cout << "Enter edges and nodes:-" << endl;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " --> ";
        for (auto &&it : g[i])
        {
            cout << it << ", ";
        }
        cout << endl;
    }

    return 0;
}
