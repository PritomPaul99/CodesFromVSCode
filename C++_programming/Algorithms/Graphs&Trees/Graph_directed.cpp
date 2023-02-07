//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;
vector<vector<int>> graph(N);

int main()
{
    int v, e;
    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
    }

    for (int i = 0; i < v; i++)
    {
        cout << i << ": ";
        for (auto &&it : graph[i])
        {
            cout << it << ", ";
        }
        cout << endl;
    }
    
    

    return 0;
}



