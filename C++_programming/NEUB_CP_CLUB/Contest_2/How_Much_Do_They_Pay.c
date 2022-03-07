#include <stdio.h>

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int x;
    scanf("%d", &x);

    float y = (float)x / 5;
    float a = 3 * y;
    float b = 2 * y;
    printf("%.2f %.2f", a, b);

    return 0;
}