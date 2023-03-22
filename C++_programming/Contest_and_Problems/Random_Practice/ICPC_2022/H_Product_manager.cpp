// #include <iostream>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> F;

ll fact(int n)
{
    return ((n == 1 || n == 1) ? 1 : n * (fact(n - 1)) * 1ll);
}

int tc = 1;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Case " << tc++ << ": ";
    cout << F[n - 1] << '\n';
}
int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= 20; i++)
    {
        F.push_back(fact(i));
    }

    while (t--)

    {
        solve();
    }
    return 0;
}
