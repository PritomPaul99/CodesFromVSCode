#include <stdio.h>

void secondLargest()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == B || B == C)
    {
        printf("%d\n", B);
    }
    else if ((B >= A && A >= C) || (C >= A && A >= B))
    {
        printf("%d\n", A);
    }
    else if ((A >= B && B >= C) || (C >= B && B >= A))
    {
        printf("%d\n", B);
    }
    else if ((A >= C && C >= B) || (B >= C && C >= A))
    {
        printf("%d\n", C);
    }
    return;
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        secondLargest();
    }

    return 0;
}