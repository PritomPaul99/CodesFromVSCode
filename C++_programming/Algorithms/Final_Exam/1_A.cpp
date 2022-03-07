#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int M(int *T, int *s, int i);

int main()
{
    int T[4] = {10, 15, 6, 20};
    int s[4] = {2, 1, 1, 0};
    printf("%d\n", M(&T[0], &s[0], 2));
}

int M(int T[4], int s[4], int i)
{
    if (i > 3)
        return 0;
    else
    {
        int a = T[i] + M(T, s, i + s[i] + 1);
        int b = M(&T[0], &s[0], i + 1);
        return max(a, b);
    }
}