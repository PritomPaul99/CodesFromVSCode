#include <stdio.h>

int main()
{
    int T;
    int N;
    int m;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int count=0;
        int sum = 0;
        scanf("%d", &N);
        while (N > 0)
        {
            m = N % 10;
            sum = sum + m;
            N = N / 10;
            count++;
        }
        if (sum%count == 0)
        {
            printf("Good work");
        }
        else
        {
            printf("Try again");
        }
        printf("\n");        
    }
    return 0;
}