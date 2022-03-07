#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, d, r, s;
    std::cin >> n >> a >> b >> c >> d;
    r = abs(a - c);
    s = abs(b - d);
    a = (r == n || n == s) ? a + b + c + d : r + s;
    cout << min(4 * n - a, a);
}


    /*if (a==n || b==n)
    {
        cout << min((x1+x2+y1+y2), ((4*n)-x1+x2+y1+y2)) << endl;
    }
    else
    {
        
        cout << min((a+b), ((4*n)-a+b)) << endl;
    }**/