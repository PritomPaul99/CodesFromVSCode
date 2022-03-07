#include <stdio.h>

int main()
{
    int T;
    int N, K, X;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d  %d", &N, &K);
        while (N > 0)
        {

            X = N - K;
            if (X < 0)
            {
                break;
            }
            else
            {
                N = X;
            }
        }
        printf("%d", N);
        printf("\n");
    }
    return 0;
}