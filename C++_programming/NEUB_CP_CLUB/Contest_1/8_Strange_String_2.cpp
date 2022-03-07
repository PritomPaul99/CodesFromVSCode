#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void solve()
{
    char str[10];
    cin >> str;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'Z' && !(i & 1))
        {
            printf("NO\n");
            return;
        }
        if (str[i] == 'A' && i & 1)
        {
            printf("NO\n");
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}