#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while (t--)
    {
        long long int n;

        cin>>n;
		while(n%2==0)n/=2;
		cout<<(n==1?"NO\n":"YES\n");
    }
    
}