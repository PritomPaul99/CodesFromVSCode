/*************************************************************************************************
*                                           Written by:                                          *
*   ______________   ______________   _____   ______________   ______________   _            _   *
*  |  __________  | |  __________  | |_   _| |_____   ______| |  __________  | |  \        /  |  *
*  | |          | | | |          | |   | |         | |        | |          | | | |\\      //| |  *
*  | |          | | | |          | |   | |         | |        | |          | | | | \\    // | |  *
*  | |__________| | | |__________| |   | |         | |        | |          | | | |  \\  //  | |  *
*  |  ____________| |  ___  _______|   | |         | |        | |          | | | |   \\//   | |  *
*  | |              | |   \ \          | |         | |        | |          | | | |    \/    | |  *
*  | |              | |    \ \         | |         | |        | |          | | | |          | |  *
*  | |              | |     \ \____   _| |_        | |        | |__________| | | |          | |  *
*  |_|              |_|      \_____| |_____|       |_|        |______________| |_|          |_|  *
*                                                                                                *
*                                             -NEUB-                                             *
*                         Depertment of Computer Science and Engineering                         *
*************************************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define lli long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int total = 0, total2 = 0;

        int a[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        if (total == x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            sort(a, a + n, greater<int>());

            if (a[0] == x)
                swap(a[0], a[1]);

            for (int i = 0; i < n; i++)
            {
                total2 += a[i];
                if (total2 == x)
                {
                    swap(a[i], a[i + 1]);
                    total2 += a[i] - a[i + 1];
                }
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}