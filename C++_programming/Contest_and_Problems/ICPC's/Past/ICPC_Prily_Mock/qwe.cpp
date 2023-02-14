#include <bits/stdc++.h>

using namespace std;

void solve(int j)
{
	long long k;
	cin>>k;
	long long a[1000];
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
	}
	sort(a,a+k);
	cout <<"Case "<<j<< ": " <<a[0]*a[k-1]<< endl;
}

int main()
{
	int n,i=1;
	cin>>n;
	while(n--)
	{
		solve(i++);
	}
	return 0;
}