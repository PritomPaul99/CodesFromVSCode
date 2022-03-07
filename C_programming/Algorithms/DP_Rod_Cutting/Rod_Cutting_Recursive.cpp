#include <stdio.h>
#include <math.h>
#include <limits.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int rod_Cutting(int *p, int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int q = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        q = max(q, p[i] + rod_Cutting(p, n - i - 1));
    }
    return q;
}

int main()
{
    int p[] = {1, 5, 8, 9, 10, 16, 17, 20, 24, 30};
    int n = sizeof(p) / sizeof(p[0]);

    printf("Max value is: %d", rod_Cutting(p, n));
    return 0;
}