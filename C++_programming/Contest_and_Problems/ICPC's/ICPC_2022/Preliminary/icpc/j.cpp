///******* In the name of ALLAH, Who is Most Gracious, Most Merciful *******///
///******* There is no God but ALLAH, MUHAMMAD(S.A.W) is the Messenger of ALLAH. *******///
///******* Every soul shall taste death.*******///

//  AL-HAMDULILLAH    //  AL-HAMDULILLAH     //  AL-HAMDULILLAH    //  AL-HAMDULILLAH
//  AL-HAMDULILLAH    //  AL-HAMDULILLAH     //  AL-HAMDULILLAH    //  AL-HAMDULILLAH
//  AL-HAMDULILLAH    //  AL-HAMDULILLAH     //  AL-HAMDULILLAH    //  AL-HAMDULILLAH
//  AL-HAMDULILLAH    //  AL-HAMDULILLAH     //  AL-HAMDULILLAH    //  AL-HAMDULILLAH
//  AL-HAMDULILLAH    //  AL-HAMDULILLAH     //  AL-HAMDULILLAH    //  AL-HAMDULILLAH

/**************************************************************************************
    ___  _          _   _  ___ ___  ________ _   _ _    _____ _     _      ___  _   _
   / _ \| |        | | | |/ _ \|  \/  |  _  | | | | |  |_   _| |   | |    / _ \| | | |
  / /_\ | |  ____  | |_| / /_\ | .  . | | | | | | | |    | | | |   | |   / /_\ | |_| |
  |  _  | | |____| |  _  |  _  | |\/| | | | | | | | |    | | | |   | |   |  _  |  _  |
  | | | | |____    | | | | | | | |  | | |/ /| |_| | |____| |_| |___| |___| | | | | | |
  \_| |_\_____/    \_| |_\_| |_\_|  |_|___/  \___/\_____\___/\_____\_____\_| |_\_| |_/

***************************************************************************************/

//  AL-HAMDULILLAH    //  AL-HAMDULILLAH     //  AL-HAMDULILLAH    //  AL-HAMDULILLAH
//  AL-HAMDULILLAH    //  AL-HAMDULILLAH     //  AL-HAMDULILLAH    //  AL-HAMDULILLAH
//  AL-HAMDULILLAH    //  AL-HAMDULILLAH     //  AL-HAMDULILLAH    //  AL-HAMDULILLAH


//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define 	ll              long long
#define 	size1           1000001
#define 	bm              1000000007   //bigmod
#define		reset(arr,n,i)  fill(arr,arr+n,i)  //cbrt(n) means cube root
#define		rset(arr,x)  	memset(arr,x,sizeof(arr))
#define		_ceil(x,y)      ((x)/(y))+(((x)%(y))>0)
#define		INF             1e18 + 10
#define		mod             1e9 + 7//998244353;
#define 	endl            "\n"

#define		_cpy(c,a,n)     for(int i=0;i<n;i++) c[i]=a[i];
#define 	_iin(a,n)       int a[n]; for(int i=0;i<n;i++) cin>>a[i]
#define 	_lin(a,n)       ll a[n]; for(int i=0;i<n;i++) cin>>a[i]
#define 	_in(a,n)        for(int i=0;i<n;i++) cin>>a[i]
#define 	_out(a,n)       for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl
#define		_celi(x,y)      (x+y-1)/(y)  //use this version of _ceil [note: ceil is risky]
#define     eps             0.0000000001

#define 	fopr()          freopen("input.txt", "r", stdin)
#define 	fopw()          freopen("output.txt", "w", stdout)
#define 	FastIO          ios_base::sync_with_stdio(false), cin.tie(0)

// Math :
void		mns(int *x, int *y)		{if(*x>=*y) *x-=*y, *y=0; else *y-=*x, *x=0;}
int			log_2(ll n)				{int cnt=0; while(n/2) cnt++, n/=2; return cnt;}

// Debuging :
#define		_dbg(_x,_y,_z)  cout<<_x<<" "<<_y<<" "<<_z<<endl
#define		_dbl			cout<<"_________________ "<<endl
#define		_db(_x,_y)      cout<<_x<<" "<<_y<<endl
#define     OK              cout<<"Ok"<<endl;

using namespace std;

void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll x;
    x=a/d;
    a-=x*d;

    c+=x*d;

    b-=a;
    c-=a;

    /*(b<0 || c<0){
        cout<<"Fight"<<endl;
        return;
    }*/

    b=b+c;

    if(b%d==0 && (b/d)%3==0){
        cout<<"Peaceful"<<endl;
    }
    else{
        cout<<"Fight"<<endl;
    }

}

int main()
{
	FastIO;
	int n,i=1;
	cin>>n;
	while(n--)
	{
	    cout<<"Case "<<i++<<": ";
		solve();
	}
	return 0;
}
//written by MAMUN

/*  Cautions:
	1.array out of bound!!! [check array size and last accessed index]
	2.signed integer overflow!!! [int*int!=ll @typecast(ll) one of them or, multiply with 1LL]
	3.floating point numbers numbers are equal if the difference between them is less than 1e-9 [better way to compare floating point numbers]
	4.any square number when divided by 4 must have a remainder of either 0 or 1.
*/


/********************************************************************************************************************************************************
 _   _            _   _       _____          _     _   _       _                    _ _          ______                   _           _           _
| \ | |          | | | |     |  ___|        | |   | | | |     (_)                  (_) |         | ___ \                 | |         | |         | |
|  \| | ___  _ __| |_| |__   | |__  __ _ ___| |_  | | | |_ __  ___   _____ _ __ ___ _| |_ _   _  | |_/ / __ _ _ __   __ _| | __ _  __| | ___  ___| |__
| . ` |/ _ \| '__| __| '_ \  |  __|/ _` / __| __| | | | | '_ \| \ \ / / _ \ '__/ __| | __| | | | | ___ \/ _` | '_ \ / _` | |/ _` |/ _` |/ _ \/ __| '_ \
| |\  | (_) | |  | |_| | | | | |__| (_| \__ \ |_  | |_| | | | | |\ V /  __/ |  \__ \ | |_| |_| | | |_/ / (_| | | | | (_| | | (_| | (_| |  __/\__ \ | | |
\_| \_/\___/|_|   \__|_| |_| \____/\__,_|___/\__|  \___/|_| |_|_| \_/ \___|_|  |___/_|\__|\__, | \____/ \__,_|_| |_|\__, |_|\__,_|\__,_|\___||___/_| |_|
                                                                                           __/ |                     __/ |
                                                                                          |___/                     |___/
*********************************************************************************************************************************************************/

