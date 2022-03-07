#include <stdio.h>

int main()
{
    int T;
    int N, K, X;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d  %d", &N, &K);

        if (K == 0)
        {
            printf("%d\n", N);
        }
        else
        {
            printf("%d\n", N % K);
        }
    }
    return 0;
}