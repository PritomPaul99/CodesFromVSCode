#include <bits/stdc++.h>

#define nl '\n'
#define f_input freopen("second_hands_input.txt", "r", stdin)
#define f_output freopen("second_hands_output.txt", "w", stdout)
#define nl '\n'
#define FastIO ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (auto &&it : mp)
    {
        if (it.second > 2)
        {
            cout << "NO" << nl;
            return;
        }
    }

    if (ceil((float)n / 2 > k))
    {
        cout << "NO" << nl;
    }
    else
    {
        cout << "YES" << nl;
    }
}

int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    double start = clock();
    f_input;
    f_output;
#endif

    int ttt, ca = 1;
    cin >> ttt;
    while (ttt--)
    {
        cout << "Case #" << ca << ": ";
        solve();
        ca++;
    }

#ifndef ONLINE_JUDGE
    double time = (clock() - start) / CLOCKS_PER_SEC;
    cerr << "Running Time : " << time << "\n";
#endif
    return 0;
}
