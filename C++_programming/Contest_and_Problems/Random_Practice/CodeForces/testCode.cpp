#include <bits/stdc++.h>


#define f_input freopen("input.txt", "r", stdin)
#define f_output freopen("output.txt", "w", stdout)
#define nl '\n'
#define FastIO ios_base::sync_with_stdio(false), cin.tie(NULL)
// Loops


using namespace std;
int dis(int x, int y, int p, int q)
{
    return abs(x - p) + abs(y - q);
}
void solve()
{
    int n, m, s1, s2, d;
    cin >> n >> m >> s1 >> s2 >> d;

    if (d == 0)
    {
        cout << abs(1 - n) + abs(1 - m) << nl;
    }
    else if (dis(n, m, s1, s2) == d)
    {
        cout << -1 << nl;
    }
    else
    {
        int a = 0, b = 0, c = 0, d = 0;

        for (int i = 0, j = 0; j < m; j++)
        {
            if(dis(i, j, s1,s2) == d)
            {
                a = 1;
                break;
            }
        }
        for (int i = 0, j = 0; i < n; i++)
        {
            if(dis(i, j, s1,s2) == d)
            {
                b = 1;
                break;
            }
        }
        for (int i = n, j = 0; i < m; j++)
        {
            if(dis(i, j, s1,s2) == d)
            {
                c = 1;
                break;
            }
        }
        for (int i = 0, j = m; i < n; i++)
        {
            if(dis(i, j, s1,s2) == d)
            {
                d = 1;
                break;
            }
        }
        if(a+b+c+d > 2)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << dis(1, 1, n, m) << nl;
        }
    }
}

int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    double start = clock();
    f_input;
    f_output;
#endif

    int ttt, ca = 1;
    cin >> ttt;
    while (ttt--)
    {

        solve();

    }


    return 0;
}
