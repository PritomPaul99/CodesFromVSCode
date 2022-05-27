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
#define d_sort(arr, size) sort(arr, arr + n, greater<int>())
#define min_el(arr, size) *min_element(arr, arr + n)
#define max_el(arr, size) *max_element(arr, arr + n)
#define ain(arr, n) fo(i, n) cin >> arr[i]
// cout << fixed << setprecision(__n) << x << endl;
#define FSP(x) fixed << setprecision(x)
// Vector
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
// debug
#define cpoint cout << "_________________CHECK POINT_________________\n";
#define _debug(x) cout << x << endl
#define Yes cout << "YES\n";
#define No cout << "NO\n";

using namespace std;

bool check(int arr[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        if ((arr[i] > arr[i + 1] && arr[i - 1] < arr[i]) || (arr[i] < arr[i + 1] && arr[i - 1] > arr[i]))
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
void solve()
{
    int n;
    cin >> n;
    int arr[n], b[n];
    ain(arr, n);

    if (n % 2)
    {
        No;
        return;
    }
    sort(arr, arr + n);
    if (check(arr, n))
    {
        Yes;
        fo(i, n) cout << arr[i] << " ";
        cout << nl;
        return;
    }

    int j = 0, k = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            b[i] = arr[j++];
        }
        else
        {
            b[i] = arr[k--];
        }
    }
    if (check(b, n))
    {
        Yes;
        fo(i, n) cout << b[i] << " ";
        cout << "\n";
        return;
    }

    int p = 0, q = n / 2, c[n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            c[i] = arr[p++];
        }
        else
        {
            c[i] = arr[q++];
        }
    }

    if (check(c, n))
    {
        Yes;
        fo(i, n) cout << c[i] << " ";
        cout << "\n";
        return;
    }

    No;
}

int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    double start = clock();
    f_input;
    f_output;
#endif

    int ttt;
    cin >> ttt;
    while (ttt--)
        solve();

#ifndef ONLINE_JUDGE
    double time = ((clock() - start) / CLOCKS_PER_SEC);
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