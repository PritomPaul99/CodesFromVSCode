#include <iostream>

using namespace std;

int maxSumSubarray(int *arr, int lb, int ub);
int maxCrossingSum(int *arr, int lb, int mid, int ub);

int main()
{
    int arr[] = {-1, 4, -2, 5}; //MSS = 7
    int n = sizeof(arr) / sizeof(arr[0]);

    int m = maxSumSubarray(arr, 0, n - 1);

    printf("Maximum subarray sum = %d", m);
    return 0;
}

int maxSumSubarray(int *arr, int lb, int ub)
{
    if (ub == lb)
    {
        return arr[lb];
    }
    else
    {
        int mid = (lb + ub) / 2;

        return max(max(maxSumSubarray(arr, lb, mid), maxSumSubarray(arr, mid + 1, ub)), maxCrossingSum(arr, lb, mid, ub));
    }
}

int maxCrossingSum(int *arr, int lb, int mid, int ub)
{
    int sum = 0;
    int leftSum = INT16_MIN;
    for (int i = mid; i >= lb; --i)
    {
        sum += arr[i];
        if (leftSum < sum)
        {
            leftSum = sum;
        }
    }

    sum = 0;
    int rightSum = INT16_MIN;
    for (int i = (mid + 1); i <= ub; i++)
    {
        sum += arr[i];
        if (sum > rightSum)
        {
            rightSum = sum;
        }
    }

    return max((max(leftSum, rightSum)), rightSum+leftSum);
}