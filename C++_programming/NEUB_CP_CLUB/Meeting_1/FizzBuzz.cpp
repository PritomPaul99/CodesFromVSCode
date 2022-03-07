#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i<=n; i++)
    {
        if(i%3 != 0 && i%5 != 0)
        {
            printf("%d\n", i);
        }
        else if(i%3 == 0 && i%5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if(i%3 == 0 && i % 5 != 0)
        {
            printf("Fizz\n");
        }
         else if(1%3 != 0 && i%5 == 0)
        {
            printf("Buzz\n");
        }
        
    }
    return 0;
}