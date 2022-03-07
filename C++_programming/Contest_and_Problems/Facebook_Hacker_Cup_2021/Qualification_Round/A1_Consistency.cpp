#include <bits/stdc++.h>

#define ll long long
#define lli long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define f_input freopen("input.txt", "r", stdin)
#define f_output freopen("output.txt", "w", stdout)
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342
#define nl "\n"
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) x.begin(), x.end()
#define f(a, x, y) for (int a = x; a < y; a++)
#define fr(a, x, y) for (int a = x; a < y; a--)
typedef unsigned long int uint32;
typedef unsigned long long int uint64;
// cout << fixed << setprecision(__n) << x << endl;

using namespace std;

void solve(int it)
{
    string s;
    cin >> s;
    int c = 0, v = 0, len = s.size();

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    int maxV[26] = {0}, maxC[26] = {0};
    int max_i = -1, max_j = -1;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            maxV[s[i] - 'A']++;
        }
        else
        {
            maxC[s[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (max_i < maxV[i])
        {
            max_i = maxV[i];
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (max_j < maxC[i])
        {
            max_j = maxC[i];
        }
    }
    // cout << max_i << "   " << max_j << endl;

    int x = (v - max_i) * 2 + c;
    int y = (c - max_j) * 2 + v;

    cout << "Case #" << it << ": " << min(x, y) << endl;
}

int main()
{
    FastIO;
// #ifndef ONLINE_JUDGE
//     f_input;
//     f_output;
// #endif

    int ttt, it = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve(it);
        it++;
    }
    return 0;
}