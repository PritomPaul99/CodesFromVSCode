//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int MOD = 1e9 + 7;
int main()
{
    int n;
    cin >> n;

    long long fact = 1;

    for (int i = 2; i <= n; i++)
    {
        fact = fact * i ;
    }

    cout << fact * 1ll << endl;

    return 0;
}
