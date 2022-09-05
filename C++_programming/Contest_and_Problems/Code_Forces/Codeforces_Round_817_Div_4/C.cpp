#include <bits/stdc++.h>


#define f_input freopen("input.txt", "r", stdin)
#define f_output freopen("output.txt", "w", stdout)
#define nl '\n'
#define FastIO ios_base::sync_with_stdio(false), cin.tie(NULL)


using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<string> v1, v2, v3;
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v1.push_back(x);
        mp[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v2.push_back(x);
        mp[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v3.push_back(x);
        mp[x]++;
    }


    // for (auto &&it : mp)
    // {
    //     cout << it.first << " " << it.second << nl;
    // }
    // cout << nl;

    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < n; i++)
    {
        if(mp[v1[i]] == 1)
        {
            c1 += 3;
        }
        else if (mp[v1[i]] == 2)
        {
            c1 += 1;
        }
        else
        {
            continue;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(mp[v2[i]] == 1)
        {
            c2 += 3;
        }
        else if (mp[v2[i]] == 2)
        {
            c2 += 1;
        }
        else
        {
            continue;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(mp[v3[i]] == 1)
        {
            c3 += 3;
        }
        else if (mp[v3[i]] == 2)
        {
            c3 += 1;
        }
        else
        {
            continue;
        }
    }

    cout << c1 << " " << c2 << " " << c3 << nl;
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