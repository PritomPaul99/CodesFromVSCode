#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        if (k == 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if (k % 2 != 0)
            {
                for (i = 1; i <= n; i++)
                {
                    cout << i << " ";
                    if (i % 2 == 0)
                    {
                        cout << endl;
                    }
                }
            }
            else
            {

                for (i = n; i >= 1; i--)
                {
                    if ((i + 1) % 4 == 0)
                        cout << i + 1 << " ";
                    else if ((i) % 4 == 0)
                        cout << i - 1 << " ";
                    else
                        cout << i << " ";
                    if (i % 2 == 1)
                    {
                        cout << endl;
                    }
                }
            }
        }
    }
}