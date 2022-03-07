#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

int max(int a, int b) { return a > b ? a : b; }

int rod_Cutting_Buttom_Up(int *p, int n)
{
    int r[n + 1];
    int q;
    r[0] = 0;
    for (int j = 1; j <= n; j++)
    {
        q = INT_MIN;
        // co = 0;
        for (int i = 0; i < j; i++)
        {
            // co++;
            q = max(q, p[i] + r[j - i - 1]);
        }
        r[j] = q;
    }
    // printf("%d\n", co);
    return r[n];
}

int main()
{
    int p[] = {1, 5, 8, 9, 10, 16, 17, 20, 24, 30};
    int n = sizeof(p) / sizeof(p[0]);
    int c = 2;

    printf("Max value is: %d", rod_Cutting_Buttom_Up(p, 4));
    return 0;
}