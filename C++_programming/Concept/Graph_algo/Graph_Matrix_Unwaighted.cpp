//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;
int g[N][N];

int main()
{
    cout << "Enter N & M:-" << endl;
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        g[v1][v2] = 1;
        g[v2][v1] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}



