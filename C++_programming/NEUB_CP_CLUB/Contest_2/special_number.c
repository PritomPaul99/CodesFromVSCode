#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    if (s % 2 == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}