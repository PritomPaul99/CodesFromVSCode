#include <bits/stdc++.h>

using namespace std;

struct z
{
    int x;
    int y;
};

void solve()
{
    int n, t = 0;
    cin >> n;
    char a[n][n];

    z s[3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == '*')
            {
                s[t].x = i;
                s[t++].y = j;
            }
        }
    }
    //if(s[0].x>s[1].x)
    //swap(s[0],s[1]);

    if (s[0].x == s[1].x && s[1].x > 0)
    {
        a[0][s[0].y] = '*';
        a[0][s[1].y] = '*';
    }

    else if (s[0].x == s[1].x && s[1].x == 0)
    {
        a[n - 1][s[0].y] = '*';
        a[n - 1][s[1].y] = '*';
    }

    else if (s[0].y == s[1].y && s[1].y > 0)
    {
        a[s[0].x][0] = '*';
        a[s[1].x][0] = '*';
    }

    else if (s[0].y == s[1].y && s[1].y == 0)
    {
        a[s[0].x][n - 1] = '*';
        a[s[1].x][n - 1] = '*';
    }

    else if (s[0].x != s[1].x && s[0].y != s[1].y)
    {
        a[s[1].x][s[0].y] = '*';
        a[s[0].x][s[1].y] = '*';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}