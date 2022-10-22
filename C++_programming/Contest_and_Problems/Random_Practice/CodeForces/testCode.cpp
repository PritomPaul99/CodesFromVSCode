//#include <iostream>
#include <bits/stdc++.h>

#define nl '\n'

using namespace std;
int n = 1e9 + 7;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    int x = accumulate(v.begin(), v.end(), 0);

    cout << x << nl;
}
