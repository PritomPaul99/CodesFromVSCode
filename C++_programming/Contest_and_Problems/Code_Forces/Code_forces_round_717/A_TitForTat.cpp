#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, k, j = 0;
        int arr[100];

        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        while (k != 0 && j != (n - 1))
        {

            if (arr[j] > 0)
            {
                arr[j] = arr[j] - 1;
                arr[n - 1] = arr[n - 1] + 1;
                k--;
            }
            else
            {
                j++;
            }
            if(j = (n-1))
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}