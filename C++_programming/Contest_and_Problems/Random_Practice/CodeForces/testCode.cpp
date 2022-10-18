//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {3, 2, 1 ,4, 9};

    auto x = *lower_bound(v.begin(), v.end(), 3);

    cout << x << endl;
}
