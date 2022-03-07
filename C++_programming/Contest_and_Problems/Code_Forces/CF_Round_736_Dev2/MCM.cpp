#include <bits/stdc++.h>

using namespace std;

int matrixChainMultiplication(int P[], int n)
{
    int c[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        c[i][i] = 0;
    }

    for (int L = 2; L <= n; L++)
    {
        for (int i = 1; i <= n - L + 1; i++)
        {
            cout << "i: " << i << " j: ";
            int j = i + L - 1;
            cout << j << endl;

            c[i][j] = INT_MAX;

            for (int k = i; j < n && k <= j - 1; k++)
            {
                int cost = c[i][k] + c[k + 1][j] + P[i - 1] * P[k] * P[j];

                cout << "\tk: " << k << " k+1: " << (k + 1) << endl;
                cout << "\t\tP[i-1]: " << P[i - 1] << " P[k]: " << P[k] << " P[j}: " << P[j] << endl
                     << endl;
                // cout << "\tCost: " << cost << endl
                //      << endl;

                cout << "\t\tm[" << i << ", " << k << "]"
                     << "=" << c[i][k] << " + "
                     << "m[" << (k + 1) << ", " << j << " ]=" << c[k + 1][j] << " + " << P[i - 1] << "*" << P[k] << "*" << P[j] << endl
                     << endl;
                cout << "\tCost: " << cost << endl
                     << endl
                     << endl;

                if (cost < c[i][j])
                {
                    c[i][j] = cost;
                }
            }
        }
    }
    return c[1][n - 1];
}

int main()
{
    int P[] = {30, 35, 15, 5, 10, 20, 25};
    int n = sizeof(P) / sizeof(P[0]);

    cout << "The minimum cost is \n"
         << matrixChainMultiplication(P, n);

    return 0;
}
