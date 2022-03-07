#include <iostream>

int main()
{
    int a, b, c, d, year;
    scanf("%d", &year);

    while (1)
    {
        year++;                  //2014
        a = year / 1000;

        int x = year / 100; //x = 20
        b = x % 10;  // b = 0

        int y = year / 10; // 20        1
        c = y % 10; // c = 1

        d = year % 10; // d = 4

        // printf("%d %d %d %d\n", a, b, c, d);
        // break;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    printf("%d \n", year);

    return 0;
}