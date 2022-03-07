#include <bits/stdc++.h>

using namespace std;

int main()
{
    //pritom
    int n;
    cin >> n;
    int v[100000];
    int b[100000];
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        b[i] = v[i];
    }
    sort(b, b+n);

    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (b[i] != v[i])
        {
            count1 = i;
        }
        
    }
    for (int  i = 0; i < n; i--)
    {
        if (b[i] != v[i])
        {
            count2 = i;
        }
    }
    
    if(count1 == count2)
    {
        cout << count1+1 << " " << count2+1 << endl;
    }
}