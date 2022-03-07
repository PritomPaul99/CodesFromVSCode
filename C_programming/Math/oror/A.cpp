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
    printf("%d\n", M(&T[0], &s[0], 0));
    // printf("%d", 1 + s[0]);
}
int M(int T[], int s[], int i)
{
    printf("%d\n", i);
    if (i > 3)
        return 0;
    else
    {
        return max((T[i] + M(T, s, i + s[i] + 1)), (M(T, s, i + 1))); 
        // int a = T[i] + M(T, s, i + s[i] + 1);
        // int b = M(T, s, i + 1);
        // return max(a, b);
        // return er;
    }
}