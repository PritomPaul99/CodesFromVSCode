#include <stdio.h>
int main()
{
    int r;
    scanf(" %d", &r);

    int i, j, k, p;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r + 1; j++)
        {
            int x = j % i;
            printf("%d mod %d = %d\t", i, j, x);
        }
        printf("\n");
    }
}
