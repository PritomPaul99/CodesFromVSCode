void bfs(int s)
{
    queue<int> q;
    q.push(s);
    for (int i = 0; i < n; i++)
        dist[i] = -1;
    dist[s] = 0;
    while (q.size())
    {
        int u = q.front();
        q.pop();
        for (int v = 0; v < n; v++)
        {
            if (g[u][v] && dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}