#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a==b) || (b==c))
    {
        printf("B\n");
    }
    else if((b>=a && a>=c) || (c>=a && a>=b))
    {
        printf("A\n");
    }
    else if((a >= b && b >= c) || (c>=b && b>=a))
    {
        printf("B\n");
    }
    else if ((a >= c && c >= b) || (b>=c && c >= a))
    {
        printf("C\n");
    }
    return 0;
}
