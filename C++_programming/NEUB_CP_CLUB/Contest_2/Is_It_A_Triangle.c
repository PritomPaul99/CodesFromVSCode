#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if ((a + b) > c)
    {
        if ((b + c) > a)
        {
            if ((a + c) > b)
            {

                printf("TRIANGLE");
            }
            else
            {
                printf("NO");
            }
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}