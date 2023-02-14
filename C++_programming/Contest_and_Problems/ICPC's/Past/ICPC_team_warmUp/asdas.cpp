#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ind, n, c = 0, no = 0;
        cin >> n;
        int arr[n];

        map<int, int> m;
        
        for (int a = 0; a < n; a++)
        {
            cin >> arr[a];
            m[arr[a]]++;
            if (arr[a] > 1 || arr[a] < -1)
            {
                ind = arr[a];
                c++;
            }
        }
        if (c > 1)
            cout << "no\n";
        else
        {
            if (c == 1)
            {
                if (m[-1] >= 1)
                    no++;
            }
            if (m[-1] > 1)
            {
                if (m[1] == 0)
                    no++;
            }
            if (no > 0)
                cout << "no\n";
            else
                cout << "yes\n";
        }
    }
}
