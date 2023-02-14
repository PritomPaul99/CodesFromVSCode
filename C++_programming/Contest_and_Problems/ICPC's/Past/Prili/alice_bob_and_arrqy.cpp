#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;
    int i = 1;
    while (t--)
    {
        int arr[30000];
        int arr2[30000];
        int arr3[30000];
        int n;
        int q, r;
        int count = 0;
        cin >> n;
        int sum = 0;

        for (int i = 0, j = 0, k = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] > 0)
            {
                arr2[j] = arr[i];
                j++;
                q = j;
                //sum += arr2[i];
            }
            else
            {
                arr3[k] = arr[i];
                k++;
                r = k;
                count++;
            }
        }
        for(int i = 0; i< q; i++)
        {
            sum += arr2[i];
        }
        cout << "Case " << i << ": " << sum << " " << count << endl;
        i++;
    }
}