#include<bits/stdc++.h>
using namespace std;

#define ll  long long

int main()
{
    /*ll t;
    cin>>t;
    while (t--)
    {
        ll x, n, m;
        cin >> n >> m >> x;
    }*/
    int n;
	cin>>n;
	while(n--)
	{
		long long a,b,k,row,col,cell;
		cin>>a>>b>>k;
		row=k%a;
		col=ceil((float)k/a);
	
		(row!=0)?row-=1:row=row;
	
		cell=row*b+col;
	    if(row==0 && col==b)
            cell=a*b; 
		cout<<cell<<endl;
	}
	return 0;
    
}