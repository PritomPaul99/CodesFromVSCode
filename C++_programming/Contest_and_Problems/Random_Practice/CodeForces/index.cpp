#include <iostream>

using namespace std;
void solve()
{
	int n,x;
	cin>>n;
	
	int a[103]={0},b[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>x;
		++a[x];
		b[i]=x;
	}
	
	for(int i=0;i<101;i++)
	{
		if(a[i]==1)
		{
			x=i;
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==x)
		cout<<i+1<<endl;
	}
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