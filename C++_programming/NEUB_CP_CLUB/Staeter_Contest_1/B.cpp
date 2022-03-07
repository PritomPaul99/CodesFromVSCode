#include <stdio.h>

// int smallFactorial()
// {
//     int n, fact = 1;
//     scanf("%d", &n);

//     while (n > 0)
//     {
//         fact *= n;
//         n--;
//     }
//     printf("%d\n", fact);
// }

int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        int n, fact = 1;
        scanf("%d", &n);

        while (n > 0)
        {
            fact = fact * n;
            n--;
        }
        printf("%d\n", fact);
    }

    return 0;
}