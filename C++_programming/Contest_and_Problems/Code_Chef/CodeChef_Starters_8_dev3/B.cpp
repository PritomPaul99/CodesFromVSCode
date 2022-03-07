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
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342
#define nl "\n"
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) x.begin(), x.end()
#define FOR(a, x, y) for (int a = x; a < y; a++)
#define FORR(a, x, y) for (int a = x; a < y; a--)
typedef unsigned long int uint32;
typedef unsigned long long int uint64;
// cout << fixed << setprecision(__n) << x << endl;

using namespace std;

int lindex(int arr[], int n)
{
    int large = *max_element(arr, arr + n), ind;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == large)
        {
            ind = i;
            break;
        }
    }
    arr[ind] = -100000000;

    return ind + 1;
}

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;

    int arr[n], q[x];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int qc = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= m)
        {
            q[i] = i + 1;
            arr[i] = -100000000;
            qc++;
            if (qc == x)
                break;
        }
    }
    int o = qc;
    if (x > qc)
    {
        for (int j = o; j < x; j++)
        {
            q[j] = lindex(arr, n);
            qc++;
            if (qc == x)
            {
                break;
            }
        }
    }
    sort(q, q + x);
    cout << x << " ";
    for (int i = 0; i < x; i++)
    {
        cout << q[i] << " ";
    }
    cout << "\n";
}

int main()
{
    FastIO;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int ttt;
    cin >> ttt;
    while (ttt--)
        solve();

    return 0;
}

// int lindex(int arr[], int n)
// {
//     int large = *max_element(arr, arr+n), ind;

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] == large)
//         {
//             ind = i;
//             break;
//         }
//     }
//     arr[ind] = -100000000;
    
//     return ind+1;
// }