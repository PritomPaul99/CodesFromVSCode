#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int j = 0;
    cin >> t;
    while (t--)
    {
        long long arr[10000];
        int result = 0;
        int i, k;
        int m, n;
        int temp;

        cin >> k;

        for (i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        //int asize = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + k);

        result = arr[0] * arr[k - 1];
        j++;
        cout << "Case " << j << ": " << result << endl;
    }
}