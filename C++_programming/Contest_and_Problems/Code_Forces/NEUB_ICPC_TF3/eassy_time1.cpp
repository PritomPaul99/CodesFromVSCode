#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();
    string s[1000];
    string x[1000];
    int count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
            x[i] = s[i];
        }
    }

    cout<< count << endl;
    for (int i = 0; i < count; i++)
    {
        cout<<x[i]<<endl;
    }
    
}