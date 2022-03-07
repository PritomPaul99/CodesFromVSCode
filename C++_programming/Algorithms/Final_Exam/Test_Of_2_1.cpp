#include <iostream>
#include <stdio.h>

using namespace std;

int m(int *T, int *s, int n)
{
    int r[n + 1];
    int q;
    r[0] = 0;
    
}

int main()
{
    int T[4] = {10, 15, 16, 20};
    int s[4] = {2, 1, 1, 0};

    int n = sizeof(T) / sizeof(T[0]);

    int max_val = m(T, s, n);

    cout << max_val;
    return 0;
}
