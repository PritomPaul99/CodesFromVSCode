#include <iostream>
#include <math.h>
using namespace std;

int memoized_cut_rod_AUX(int arr[], int n, int r[]);

int memoized_cut_rod(int arr[], int n)
{
    int r[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        r[i] = INT32_MIN;
    }
    return memoized_cut_rod_AUX(arr, n, r);
}

int memoized_cut_rod_AUX(int arr[], int n, int r[])
{
    int q;
    if (r[n] >= 0)
    {
        return r[n];
    }
    if (n == 0)
    {
        q = 0;
    }
    else
    {
        q = INT32_MIN;
        for (int i = 0; i < n; i++)
        {
            q = max(q, arr[i] + memoized_cut_rod_AUX(arr, n - i - 1, r));
        }
    }
    r[n] = q;
    return q;
}

int main()
{
    int arr[] = {1, 5, 8, 9, 10, 16, 17, 20, 24, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int q = memoized_cut_rod(arr, n);
    cout << q;
    return 0;
}