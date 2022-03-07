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

using namespace std;

void printArray(char array, int n)
{
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, flag = 0;
        char arr[50][50];3radad
        int arr2[50][50] = {0};
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'R')
                {
                    arr2[i][j] = 1;
                }
                if (arr[i][j] == 'W')
                {
                    arr2[i][j] = 2;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == arr[i][j++])
                {
                    flag = 1;
                    break;
                }
                else
                {
                    
                }
            }
            if (flag == 1)
            {
                cout << "No" << endl;
                break;
            }
            
        }

        cout << "\n\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr2[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}