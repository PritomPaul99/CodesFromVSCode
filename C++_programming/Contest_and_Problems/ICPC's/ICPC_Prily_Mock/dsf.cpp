#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int j = 0;
    cin >> t;
    while (t--)
    {
        int arr[100000];
        int result = 0;
        int i, k;

        cin >> k;

        for (i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        int asize = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + asize);

        /*result = arr[0] * arr[k - 1];
        j++;
        cout << "Case " << j << ": " << result << endl;*/
        for (i = 0; i < k; i++)
        {
            cout << arr[i];
        }
    }
}