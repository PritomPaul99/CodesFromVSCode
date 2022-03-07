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
    int m = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) > n)
            {
                break;
            }
            sum += arr[i + j - 1];
            m = max(sum, m);
        }
    }
    return m;
}
