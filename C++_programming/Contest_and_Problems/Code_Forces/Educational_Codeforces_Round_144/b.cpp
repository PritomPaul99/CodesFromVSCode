// #include <iostream>
#include <bits/stdc++.h>

// Data Types
#define ll long long
#define lli long long int
#define ld long double
typedef unsigned long int uint32;
typedef unsigned long long int uint64;
// Constant Values & Numbers
#define pi acos(-1)
const ll Mod = 1e9 + 7;
#define POW(_x, _y) _x << _y
#define MOD(a, b) (a & (b - 1))
#define Paw2(n) (ceil(log2(n)) == floor(log2(n)))
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
#define rall(v) v.rbegin(), v.rend())
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define D_sort(v) sort(v.begin(), v.end(), greater<int>())
// Array
#define mems(a, x) memset(a, x, sizeof(a))   // Works only for 0 and -1
#define ass_vel(ar, n, x) fo(i, n) ar[i] = x // Set value in array
#define eol cout << endl
#define a_sort(ar, size) sort(ar, ar + size)
#define d_sort(arr, size) sort(arr, arr + size, greater<int>())
#define min_el(arr, size) *min_element(arr, arr + size)
#define max_el(arr, size) *max_element(arr, arr + size)
#define _min_el(x) *min_element(x.begin(), x.end())
#define _max_el(x) *max_element(x.begin(), x.end())
#define ain(arr, n) fo(i, n) cin >> arr[i]
#define aout(arr, n)                \
    fo(i, n) cout << arr[i] << " "; \
    cout << nl
#define _find(a, n, x) find(a, a + n, x) - a
// cout << fixed << setprecision(__n) << x << endl;
#define FSP(x) fixed << setprecision(x)
#define pop_cnt(n) __builtin_popcount(n)                             // Assign it to a value to find the number of 1 in a binary number
#define numBits(n) log2(n) + 1                                       // Assign it to a value to get the number of bits in an integer
#define DigitNum(n) log10(n) + 1                                     // Assign it to a value to get the number of digit in an integer
#define BITS(num) bitset<32>(num).to_string().substr(32 - log2(num)) // Binary representation of a decimal number
#define LCM(a, b) (a / __gcd(a, b) * b)
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
#define out(x) cout << x << '\n'

using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    return a.second < b.second;
}
vector<bool> PrimeNum_0(100000007);
void siv(int N)
{
    int sq = sqrt(N);
    for (int i = 4; i <= N; i += 2)
    {
        PrimeNum_0[i] = 1;
    }
    for (int i = 3; i <= sq; i += 2)
    {
        if (PrimeNum_0[i] == 0)
        {
            for (int j = i * i; j <= N; j += i)
                PrimeNum_0[j] = 1;
        }
    }
    PrimeNum_0[1] = 1;
}

string CommonSubStr(string s1, string s2)
{
    int n1 = s1.length(), n2 = s2.length();
    int dp[n1 + 1][n2 + 1];
    memset(dp, 0, sizeof(dp));
    int maxLen = 0, endPos = -1;

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLen)
                {
                    maxLen = dp[i][j];
                    endPos = i - 1;
                }
            }
        }
    }

    if (maxLen == 0)
    {
        return "";
    }
    else
    {
        return s1.substr(endPos - maxLen + 1, maxLen);
    }
}

void solve()
{
    string a, b;
    cin >> a >> b;

    string s = CommonSubStr(a, b);

    if (s == "")
    {
        cout << "NO" << nl;
    }
    else if (a == b)
    {
        cout << "YES" << nl;
        cout << a << nl;
    }
    else
    {

        if(a[a.size()-1] == b[b.size() - 1])
        {            cout << "YES" << nl;
            cout << "*" << a[a.size() - 1] << nl;
        }
        else if (a[0] == b[0])
        {
            cout << "YES" << nl;
            cout << a[0] << "*" << nl;
        }
        else if (s.length() >= 2)
        {
            cout << "YES" << nl;
            cout << '*' << s << '*' << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
        
    }

    // cout << s << nl;
}

int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    double start = clock();
    f_input;
    f_output;
#endif

    int ttt = 1, ca = 1;
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

/**
#Some Caution
* 1) Want to add character in the end of a string? Use push_back().
* 2) Max size of locally declared array is 1e5 and globally declared array is 1e7.
* 3) To find sum of array/vector, use accumulate(start_, end_, x), x = starting values to add other values to.
* 4) 1 << n == 2 ^ n.
* 5) x & (1 << i) == 0, ith bit of x is not 0.
* 6) x & (1 << i) != 0, ith bit of x is 1.
* 7) If using Siv of Eratosthenes, remember to update the size of the PrimeNum_0 vector.
* 8) sort(data.begin(), data.end(), [](const auto &a, const auto &b){ return a[1] < b[1]; });
*/

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