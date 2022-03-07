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
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342
//File handling
#define f_input freopen("input.txt", "r", stdin)
#define f_output freopen("output.txt", "w", stdout)
#define nl "\n"
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
//Loops
#define f(a, x, y) for (int a = x; a < y; a++)
#define fr(a, x, y) for (int a = x; a >= y; a--)
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
    int n;
    cin >> n;
    string str;
    cin >> str;
    int here = 0;
    int ch = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '?')
        {
            ch = 1;
        }
    }
    // cout << "-------------" << ch << endl;

    if (ch == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << 'B';
            }
            else
            {
                cout << 'R';
            }
        }
        cout << endl;
        return;
    }
    else
    {
        if (n == 1 && str[0] == '?')
        {
            str[0] = 'B';
            cout << str << endl;
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] != '?')
            {
                here = i;
                break;
            }
        }
        // cout << here << endl;

        for (int i = here; i < n; i++)
        {
            if (str[i + 1] != '?')
            {
                continue;
            }
            else
            {
                // cpoint;
                if (str[i] == 'R')
                {
                    str[i + 1] = 'B';
                }
                else if (str[i] == 'B')
                {
                    str[i + 1] = 'R';
                }
            }
        }

        for (int i = here; i >= 0; i--)
        {
            if (i == 0)
            {
                break;
            }
            else
            {
                if (str[i - 1] != '?')
                {
                    continue;
                }
                else
                {
                    if (str[i] == 'R')
                    {
                        str[i - 1] = 'B';
                    }
                    else if (str[i] == 'B')
                    {
                        str[i - 1] = 'R';
                    }
                }
            }
        }

        cout << str << endl;
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