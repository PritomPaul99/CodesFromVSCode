#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int A, B, C;

    cin >> A >> B >> C;

    if (A == B || B == C)
    {
        printf("B\n");
        return;
    }
    if ((B >= A && A >= C) || (C >= A && A >= B))
    {
        printf("A\n");
        return;
    }
    if ((A >= B && B >= C) || (C >= B && B >= A))
    {
        printf("B\n");
        return;
    }
    if ((A >= C && C >= B) || (B >= C && C >= A))
    {
        printf("C\n");
        return;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();

    return 0;
}