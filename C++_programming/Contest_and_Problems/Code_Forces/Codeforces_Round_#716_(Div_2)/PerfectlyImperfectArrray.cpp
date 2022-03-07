/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin  >> t;

    while(t--)
    {
        int n, arr[100000], b[100000];


    }
}*/

#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int x;
    x = sqrt(n);
    if (x * x == n)
        return 0;
    return 1;
}

void solve()
{
    long long n, x, c = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (check(x))
            c = 0;
    }

    if (c == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}