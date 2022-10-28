//#include <iostream>
#include <bits/stdc++.h>

#define nl '\n'

using namespace std;
int n = 1e9 + 7;
int main()
{
    vector<int> v = {2,4,7};

    v.insert(v.begin() + 2, 10);

    for (auto &&it : v)
    {
        cout << it << " ";
    }
    
}
