#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n,k,cnt=0,cnt1=0;
	cin>>n>>k;
	
	if(n>=k)
	{
		for(int i=0;i<n;i++)
		{
			cout<<i+1<<" ";
			cnt+=i+1;
		}
	
		for(int i=0;i<k-1;i++)
		{
			cout<<"-"<<(i+1)<<" ";
			cnt1+=i+1;
		}
	
		cout<<cnt1-cnt<<endl;
	}
	else
	{
		for(int i=0;i<k;i++)
		{
			cout<<"-"<<i+1<<" ";
			cnt+=i+1;
		}
	
		for(int i=0;i<n-1;i++)
		{
			cout<<(i+1)<<" ";
			cnt1+=i+1;
		}
	
		cout<<cnt-cnt1<<endl;
	}
	
	return 0;
}