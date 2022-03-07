#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,k1,k2,s,kb1,kb2,w,b,b1,b2,sw=0,sb=0;
		cin>>n>>k1>>k2;
		cin>>w>>b;
	
		k=min(k1,k2);
		s=max(k1,k2);
		sw=k;
	
		sw+=abs(k-s)/2;
	
		b1=n-k1;
		b2=n-k2;
	
		kb1=min(b1,b2);
		kb2=max(b1,b2);
		sb=kb1;
	
		sb+=abs(kb1-kb2)/2;
		
		if(w<=sw && b<=sb)
			cout<<"YES"<<endl;
		else
	    	cout<<"NO"<<endl;
	}
	return 0;
}