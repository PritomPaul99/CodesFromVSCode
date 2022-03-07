    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n, x1, x2, y1, y2;

        cin >> n >> x1 >> y1 >> x2 >> y2;

        int a = abs(x1-x2);
        int b = abs(y1-y2);

        x1 = (a == n || b == n) ? x1+x2+y1+y2 : a + b;
        
        cout << min(4 * n - x1, x1);
        
    }