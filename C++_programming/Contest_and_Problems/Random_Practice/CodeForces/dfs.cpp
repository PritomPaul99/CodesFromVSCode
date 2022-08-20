// const int N=1e6+5;//depend on question
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
vector<int> graph[N];
bool vis[N];
int cnt = 0;

void dfs(int vertex)
{
    if (vis[vertex] == true)
        return;
    vis[vertex] = true;
    cnt++;
    for (auto child : graph[vertex])
    {
        dfs(child);
    }
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        cnt = 0;
        if (vis[i] == false)
        {
            dfs(i);
            cout << cnt << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
