// Unsolved
//#include <iostream>
#include <bits/stdc++.h>

//Data Types
#define ll long long
#define lli long long int
#define ld long double
typedef unsigned long int uint32;
typedef unsigned long long int uint64;
//Constent Values
#define pi acos(-1)
#define mod 1e9 + 7
//File handling
#define f_input freopen("input.txt", "r", stdin)
#define f_output freopen("output.txt", "w", stdout)
#define nl '\n'
#define FastIO ios_base::sync_with_stdio(false), cin.tie(NULL)
//Loops
#define fs(i, s, e) for (int i = s; i < e; i++)
#define fo(i, e) for (int i = 0; i < e; i++)
#define fr(i, s, e) for (int i = s; i >= e; i--)
//Strings
#define all(x) x.begin(), x.end()
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
//Array
#define mems(a, x) memset(a, x, sizeof(a))          // Works only for 0 and -1
#define ass_vel(ar, n, x) f(a, 0, n) ar[a] = x      //Set value in array
#define parr(ar, n) f(a, 0, n) cout << ar[a] << " " // Print array
#define eol cout << endl
#define asort(ar, size) sort(ar, ar + size)
// cout << fixed << setprecision(__n) << x << endl;
#define FSP(x) fixed << setprecision(x)
//Vector
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
//debug
#define cpoint cout << "_________________CHECK POINT_________________\n";

using namespace std;

void solve()
{
    int n, i;
    cin >> n;

    int max = INT_MIN, ind;
    if (n == 1)
    {
        for (i = 1; i < 10; i++)
        {
            int j = i;
            j = j >> 1;
            if (j > max)
            {
                cout << "---" << i << endl;
                max = n;
                ind = i;
            }
        }
    }
    else
    {
        for (i = pow(10, n - 1); i < (pow(10, n) - 1); i++)
        {
            int j = i;
            j = j >> 1;
            if (j > max)
            {
                max = n;
                ind = i;
            }
        }
    }

    if ((ind << n) == ((ind - 1) << n))
    {
        cout << ind - 1 << endl;
    }
    else
    {
        cout << ind << endl;
    }
}

int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    f_input;
    f_output;
#endif

    int ttt;
    cin >> ttt;
    while (ttt--)
        solve();

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