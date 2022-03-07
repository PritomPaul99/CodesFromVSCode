#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int r1, r2;
        scanf("%d %d", &r1, &r2);
        int n = 0;
        n=2*(r1-r2)*3.1416;
        printf("%d\n",n/(2*r2));
    }
    return 0;
}