#include <stdio.h>
#include <math.h>
#include <limits.h>

void printParenthesis(int i, int j, int n, int *s, char *ch)
{
    if (i == j)
    {
        printf("%c", (*ch)++);
    }
    else
    {
        printf("(");

        printParenthesis(i, *((s + i * n) + j), n, s, ch);
        printParenthesis(*((s + i * n) + j) + 1, j, n, s, ch);

        printf(")");
    }
}

int MCM(int *p, int n)
{
    int m[n][n], s[n][n];

    int i, j, k, L, q;

    for (i = 1; i < n; i++)
    {
        m[i][i] = 0;
    }

    for (int i = 0; i < n; i++) //for k
    {
        for (int j = 0; j < n; j++)
        {
            s[i][j] = 0;
        }
    }

    for (L = 2; L < n; L++)
    {
        for (i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];

                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d ", s[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    char ch = 'A';
    printf("Optimal Parenthesization is : ");
    printParenthesis(1, n - 1, n, (int *)s, &ch);
    printf("\n");
    return m[1][n - 1];
}

int main()
{
    int arr[] = {40, 20, 30, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum number of multiplication: %d", MCM(arr, n));

    return 0;
}