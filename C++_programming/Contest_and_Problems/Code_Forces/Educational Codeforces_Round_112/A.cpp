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
typedef unsigned long int uint32;
typedef unsigned long long int uint64;

using namespace std;

lli smallest(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
 
    else if (b <= a && b <= c)
        return b;
 
    else
        return c;
}


void solve()
{
    int n;
    cin >> n;

    ld s, m, l;
    ll s1, m1, l1;
    lli t1, t2, t3;

    s = (ld)n/6;
    if(s > (lli)s)
    {
        s1 = s+1;
    }
    // cout << "S = " << s << nl;
    // s= round(s);
    t1 = s1*15; 

    // cout << s << " " << t1 << endl;

    m = (ld)n/8;
      if(m > (lli)m)
    {
        m1 = m+1;
    }
    // cout << "M = " << m << nl;
    // m = round(m);
    t2 = m1 * 20;

    // cout << m << " " << t2 << endl;

    l = (ld)n/10;
      if(l > (lli)l)
    {
        l1 = l+1;
    }
    // cout << "L = " << l << nl;
    // l = round(l);
    t3 = l1*25;

    // cout << l << " " << t3 << endl;

    // lli min = 9999999999999999999999999999;
    // if(t1 < min)
    // {
    //     min = t1;
    // }
    // else if (t2 < min)
    // {
    //     min = t2;
    // }
    // else if (t3 < min)
    // {
    //     min = t3;
    // }
    
    cout << smallest(t1,t2,t3) << endl;
    

}

int main()
{
    FastIO;

    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}