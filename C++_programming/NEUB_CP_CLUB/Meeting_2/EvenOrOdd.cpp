#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    // if(a & 1)
    // {
    //     printf("Odd Number\n");
    // }
    // else
    // {
    //     printf("Even Number\n");
    // }
    a&1 ? printf("Odd Number") : printf("Even Number");

    return 0;
}
