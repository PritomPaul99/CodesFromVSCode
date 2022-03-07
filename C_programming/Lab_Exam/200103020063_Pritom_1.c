#include <stdio.h>
int procedure(int *arr, int n);

int main()
{
    //int arr[] = {1, 10, 5, 2};
    int arr[] = {7, 8, 7, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = procedure(arr, n);

    printf("%d", arr[x]);

    return 0;
}

int procedure(int *arr, int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (arr[0] >= arr[1])
    {
        return 0;
    }
    else if (arr[n - 1] >= arr[n - 2])
    {
        return n - 1;
    }
    else
    {
        for (int i = 1; i <= n - 2; i++)
        {
            if (arr[i] >= arr[i - 1] && arr[i + 1] <= arr[i])
            {
                return i;
            }
        }
    }
}
