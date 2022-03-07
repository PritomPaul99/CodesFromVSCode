#include <stdio.h>
int main()
{

    int count = 0, i, j, k, a, r, m, l;
    scanf("%d", &a);
    r = a % 10;
    a /= 10;
    m = a % 10;
    a /= 10;
    l = a % 10;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = 0; k <= 9; k++)
            {
                printf("%d %d %d\n", i, j, k);
                if (i == l && j == m && k == r)
                    break;
            }
            if (i == l && j == m && k == r)
                break;
        }
        if (i == l && j == m && k == r)
            break;
    }
}
