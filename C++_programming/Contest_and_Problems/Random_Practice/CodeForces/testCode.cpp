// #include <iostream>
#include <bits/stdc++.h>

#define nl '\n'

using namespace std;
int n = 1e9 + 7;
int main()
{
    map<int, int> mp = {{1, 2}, {3, 4}, {5, 6}};

    for (auto &&it : mp)
    {
        cout << it.first << " " << it.second << nl;
    }

    // cout << *max_element(mp.begin(), mp.end());
}
