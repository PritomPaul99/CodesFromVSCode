#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n;
    vector<int> a;
    vector<int> t;

    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        int a1;
        cin >> a1;
        a.push_back(a1);

    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}