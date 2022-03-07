#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n;
    int p;
    int r;
    int c, d(0);

    cin >> n >> p >> r;
    c = fact(n);
    //cout << c;
    for (int i = 2; i <= n; i++)
    {
        if((c/i)*(i-1) /*== p*/ == r)
        {
            d = 1;
            cout << i << " " << i+1;
            break;
        } 
    }
    if(d=1)
    {
        cout<< -1 <<" "<<  -1;
    }

}