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
//#include <bits/stdc++.h>

#define ll long long
#define lli long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int c = n;
    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            c++;
        }
    }

    cout << c;
}