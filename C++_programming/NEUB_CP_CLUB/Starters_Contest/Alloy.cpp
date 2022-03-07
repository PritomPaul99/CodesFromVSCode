#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b;
    scanf("%d%d", &a, &b);
    if (a > 0 && b == 0)
    {
        printf("Gold\n");
    }
    else if (b > 0 && a == 0)
    {
        printf("Silver\n");
    }
    else
    {
        printf("Alloy\n");
    }
}
