#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a[11], k;
        for (int i = 0; i < 10; i++)
            scanf("%d", &a[i]);
        scanf("%d", &k);
        for (int i = 10; i >= 0; i--)
        {
            if ((k == 0 && a[i] != 0) || a[i] > k)
            {
                printf("%d", i+1);
                break;
            }
            else
                k = k - a[i];
        }
        printf("\n");
    }
    return 0;
}