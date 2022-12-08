#include <stdio.h>

int Sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int a = 5, b = 6;

    int result = Sum(a, b);

    printf("Sum is: %d", result);
}