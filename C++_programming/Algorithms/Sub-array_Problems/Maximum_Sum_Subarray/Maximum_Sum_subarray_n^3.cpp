#include <iostream>
#include <climits>

using namespace std;

int maxSumSubarray(int *arr, int n);

int main()
{
    int arr[] = {-1, 4, -2, 5}; //MSS = 7
    int n = sizeof(arr) / sizeof(arr[0]);

    int m = maxSumSubarray(arr, n);

    printf("Maximum subarray sum = %d", m);
    return 0;
}

int maxSumSubarray(int *arr, int n)
{
    int m = INT_MAX;

    for (int s = 1; s <= n; ++s)
    {
        for (int i = 0; i < n; ++i)
        {
            if (s + i > n)
            {
                break;
            }
            int sum = 0;
            // cout << "n: " << n << " _ (s+i): (" << s <<"+" << i << ") :: " << (s+i) << endl;
            for (int j = i; j < (s + i); j++)
            {
                sum += arr[j];
            }
            m = min(sum, m);
        }
    }
    return m;
}
