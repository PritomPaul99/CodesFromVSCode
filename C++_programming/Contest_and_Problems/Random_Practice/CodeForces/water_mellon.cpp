
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#else
// online submission
#endif

int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w != 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}