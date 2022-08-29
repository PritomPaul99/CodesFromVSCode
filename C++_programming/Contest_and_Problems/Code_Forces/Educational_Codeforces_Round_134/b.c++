//#include <iostream>
#include <bits/stdc++.h>

// Data Types
#define ll long long
#define lli long long int
#define ld long double
typedef unsigned long int uint32;
typedef unsigned long long int uint64;
// Constant Values
#define pi acos(-1)
const ll Mod = 1e9 + 7;
// File handling
#define f_input freopen("input.txt", "r", stdin)
#define f_output freopen("output.txt", "w", stdout)
#define nl '\n'
#define FastIO ios_base::sync_with_stdio(false), cin.tie(NULL)
// Loops
#define fs(i, s, e) for (int i = s; i < e; i++)
#define fo(i, e) for (int i = 0; i < e; i++)
#define fr(i, s, e) for (int i = s; i >= e; i--)
#define fi(n) for (int i = 0; i < n; i++)
// Strings
#define all(x) x.begin(), x.end()
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
// Array
#define mems(a, x) memset(a, x, sizeof(a))        // Works only for 0 and -1
#define ass_vel(ar, n, x) fo(i, n) ar[i] = x      // Set value in array
#define parr(ar, n) fo(i, n) cout << ar[i] << " " // Print array
#define eol cout << endl
#define a_sort(ar, size) sort(ar, ar + size)
#define d_sort(arr, size) sort(arr, arr + size, greater<int>())
#define min_el(arr, size) *min_element(arr, arr + size)
#define max_el(arr, size) *max_element(arr, arr + size)
#define ain(arr, n) fo(i, n) cin >> arr[i]
#define aout(arr, n) fo(i, n) cout << arr[i] << " "
#define find_(a, n, x) find(a, a + n, x) - a
// cout << fixed << setprecision(__n) << x << endl;
#define FSP(x) fixed << setprecision(x)
#define pop_cnt(n) __builtin_popcount(n) // Assign it to a value to find the number of 1 in a binary number
#define numBits(n) log2(n) + 1           // Assign it to a value to get the number of bits in an integer
// Vector
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
// debug
#define cpoint cout << "_________________CHECK POINT_________________\n";
#define _debug(x) cout << x << endl
#define Yes printf("Yes\n")
#define No printf("No\n")
#define YES printf("YES\n")
#define NO printf("NO\n")

using namespace std;
int dis(int x, int y, int s1, int s2)
{
    return abs(x - s1) + abs(y - s2);
}
void solve()
{
    int n, m, s1, s2, d;
    cin >> n >> m >> s1 >> s2 >> d;

    if (d == 0)
    {
        cout << abs(1 - n) + abs(1 - m) << nl;
    }
    else if (dis(n, m, s1, s2) == d)
    {
        cout << -1 << nl;
    }
    else
    {
        int l = 0, r = 0, b = 0, t = 0;

        for (int i = 0, j = 0; j < m; j++)
        {
            // cout << i << "," << j << " ";
            if (dis(i, j, s1, s2) <= d)
            {
                t = 1;
                break;
            }
        }
        // cout << nl;
        for (int i = 0, j = m; i < n; i++)
        {
            // cout << i << "," << j << nl;
            if (dis(i, j, s1, s2) <= d)
            {
                r = 1;
                break;
            }
        }

        for (int i = 0, j = 0; i < n; i++)
        {
            if (dis(i, j, s1, s2) <= d)
            {
                l = 1;
                break;
            }
        }

        for (int i = n, j = 0; j < m; j++)
        {
            if (dis(i, j, s1, s2) <= d)
            {
                b = 1;
                return;
            }
        }

        if (((r && t) || (l && b)))
        {
            cout << -1 << nl;
        }
        else
        {
            cout << m + n - 2 << nl;
        }
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
        // cout << "Case " << ca << ": ";
        solve();
        // ca++;
    }

#ifndef ONLINE_JUDGE
    double time = (clock() - start) / CLOCKS_PER_SEC;
    cerr << "Running Time : " << time << "\n";
#endif
    return 0;
}

/***************************************************************************************************\
*                                            Written by:                                            *
*                                                                                                   *
*     ██▓███   ██▀███   ██▓▄▄▄█████▓ ▒█████   ███▄ ▄███▓     ██▓███   ▄▄▄       █    ██  ██▓        *
*    ▓██░  ██▒▓██ ▒ ██▒▓██▒▓  ██▒ ▓▒▒██▒  ██▒▓██▒▀█▀ ██▒    ▓██░  ██▒▒████▄     ██  ▓██▒▓██▒        *
*    ▓██░ ██▓▒▓██ ░▄█ ▒▒██▒▒ ▓██░ ▒░▒██░  ██▒▓██    ▓██░    ▓██░ ██▓▒▒██  ▀█▄  ▓██  ▒██░▒██░        *
*    ▒██▄█▓▒ ▒▒██▀▀█▄  ░██░░ ▓██▓ ░ ▒██   ██░▒██    ▒██     ▒██▄█▓▒ ▒░██▄▄▄▄██ ▓▓█  ░██░▒██░        *
*    ▒██▒ ░  ░░██▓ ▒██▒░██░  ▒██▒ ░ ░ ████▓▒░▒██▒   ░██▒    ▒██▒ ░  ░ ▓█   ▓██▒▒▒█████▓ ░██████▒    *
*    ▒▓▒░ ░  ░░ ▒▓ ░▒▓░░▓    ▒ ░░   ░ ▒░▒░▒░ ░ ▒░   ░  ░    ▒▓▒░ ░  ░ ▒▒   ▓▒█░░▒▓▒ ▒ ▒ ░ ▒░▓  ░    *
*    ░▒ ░       ░▒ ░ ▒░ ▒ ░    ░      ░ ▒ ▒░ ░  ░      ░    ░▒ ░       ▒   ▒▒ ░░░▒░ ░ ░ ░ ░ ▒  ░    *
*    ░░         ░░   ░  ▒ ░  ░      ░ ░ ░ ▒  ░      ░       ░░         ░   ▒    ░░░ ░ ░   ░ ░       *
*                ░      ░               ░ ░         ░                      ░  ░   ░         ░  ░    *
*                                           ╔╗╔╔═╗╦ ╦╔╗                                             *
*                                        ───║║║║╣ ║ ║╠╩╗───                                         *
*                                           ╝╚╝╚═╝╚═╝╚═╝                                            *
*                                 ╔╦╗┌─┐┌─┐┌┬┐   ┌─┐┌─┐  ╔═╗╔═╗╔═╗                                  *
*                              ─── ║║├┤ ├─┘ │    │ │├┤   ║  ╚═╗║╣ ───                               *
*                                 ═╩╝└─┘┴   ┴ o  └─┘└    ╚═╝╚═╝╚═╝                                  *
\***************************************************************************************************/