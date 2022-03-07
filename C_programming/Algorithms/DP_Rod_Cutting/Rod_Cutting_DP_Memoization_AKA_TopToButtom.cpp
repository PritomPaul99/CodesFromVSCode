#include <stdio.h>
#include <math.h>
#include <limits.h>

int max(int a, int b);
int rod_Cutting_memoization_AUX(int *p, int n, int *r);
void printArray(int *arr, int n);

int rod_Cutting_memoization(int *p, int n)
{
    int r[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        r[i] = INT_MIN;
    }
    return rod_Cutting_memoization_AUX(p, n, r);
}

int rod_Cutting_memoization_AUX(int *p, int n, int *r)
{
    if (r[n] >= 0)
    {
        return r[n];
    }
    int q;
    if (n == 0)
    {
        q = 0;
    }
    else
    {
        q = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            q = max(q, p[i] + rod_Cutting_memoization_AUX(p, n - i - 1, r));
        }
    }
    r[n] = q;
    // printArray(r, n+1);
    return q;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int p[] = {1, 5, 8, 9, 10, 16, 17, 20, 24, 30};
    int n = sizeof(p) / sizeof(p[0]);

    printf("Max value is: %d", rod_Cutting_memoization(p, 6));
    return 0;
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d - ", arr[i]);
    }
    printf("\n");    
}