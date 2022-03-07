#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev = 0;
    for (size_t i = 0; n!=0; i++)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        rev = n/10;
    }
    
    
}