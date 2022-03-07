/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int r, b, d;
        cin >> r >> b >> d;

        if (abs(r - b) <= d)
        {
            cout << "YES" << endl;
        }
        else if ()
        {
            
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long r,b,d,mn,mx,x;
	cin>>r>>b>>d;
	mn=min(r,b);
	mx=max(r,b);
	
	if( mn*(d+1)>=mx)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		solve();
	}
	return 0;
}