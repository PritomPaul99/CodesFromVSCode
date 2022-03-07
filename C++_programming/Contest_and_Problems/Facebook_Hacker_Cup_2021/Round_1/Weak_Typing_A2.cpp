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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c = 0, t;

    vector<int> v1, v2, v3;
    int sum = 0, sum2 = 0;
    int mod = 1000000007;
    v2.push_back(n);
    v3.push_back(0);
    char next = 'F', pres = 'F';

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'X')
        {
            next = 'O';
            pres = 'X';
            break;
        }
        else if (s[i] == 'O')
        {
            next = 'X';
            pres = 'O';
            break;
        }
    }
    if (next == 'F')
    {
        cout << "Case #" << it << ": " << 0 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'F')
        {
            continue;
        }
        if (s[i] == pres)
        {
            t = i;
        }
        else if (s[i] == next)
        {
            c++;
            swap(next, pres);
            v2.push_back(i);
            v3.push_back(t);
            t = i;
        }
        v1.push_back(c);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        sum += v1[i];
    }

    for (int i = 0; i < v3.size() - 1; i++)
    {
        if (i == 0)
        {
            sum2 += (((sum - n + v2[i]) % mod) * ((v3[i + 1] - v3[i] + 1) % mod)) % mod;
        }
        else
        {
            sum2 += (((sum - n + v2[i]) % mod) * ((v3[i + 1] - v3[i]) % mod)) % mod;
        }
    }

    cout << "Case #" << it << ": " << sum2 << endl;
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
    int it = 1;
    while (ttt--)
    {
        solve(it);
        it++;
    }
    return 0;
}