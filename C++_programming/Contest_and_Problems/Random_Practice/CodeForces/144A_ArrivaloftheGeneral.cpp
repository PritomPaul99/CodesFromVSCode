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
*                         Department of Computer Science and Engineering                         *
*************************************************************************************************/
//#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define lli long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342
#define nl "\n";

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[200];
    int min = 100000, minI, max = -100000, maxI;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            maxI = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minI = i;
        }
    }
    for (int i = minI; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            flag++;
        }
    }
    for (int i = maxI; i >= 1; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            flag++;
        }
    }

    cout << "Max: " << max << " at: " << maxI + 1 << nl;
    cout << "Min: " << min << " at: " << minI + 1 << nl;
    // cout << nl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << nl;

    cout << flag;

    return 0;
}