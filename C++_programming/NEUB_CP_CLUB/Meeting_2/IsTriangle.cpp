#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a+b > c && b+c > a && a+c > b) {
        printf("TRIANGLE\n" );
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
