#include <stdio.h>
int sum(int y);
int main()
{
    int x = 3;

    printf("Result: %d", sum(x));

    return 0;
}

int sum(int y)
{
    if(y == 1)
    {
        return 1;
    }
    else
    {
        printf("%d", y);
        return 1 + sum(y-1);
        printf("\n%d", y);
    }
    
}