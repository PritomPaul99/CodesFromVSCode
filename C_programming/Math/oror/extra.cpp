#include <stdio.h>
int findMax(int Ti[], int low, int high);
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Max: %d", findMax(a, 0, 9));
    return 0;
}
int findMax(int Ti[], int low, int high)
{
    int max;
    if (low == high)
        return Ti[low];
    else
    {
        max = findMax(Ti, low + 1, high);

        if (Ti[low] >= max)
            return Ti[low];
        else
            return max;
    }
}

