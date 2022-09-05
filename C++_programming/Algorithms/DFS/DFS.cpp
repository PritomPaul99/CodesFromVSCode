//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;
vector<int> g(N);

int vis[N];

void bfs(int source)
{
    queue<int> q;

    q.push(source);

    vis[source] = 1;

    while (!q.empty())
    {
        int c_ver = q.front();
        q.pop();
        
    }
    
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin >> x >> y;

        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);

    return 0;
}



