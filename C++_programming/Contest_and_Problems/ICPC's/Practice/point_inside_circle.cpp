#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i = 1;
    cin >> n;
    while (n--)
    {
        int cx, cy, r, px, py;
        cin >> cx >> cy >> r >> px >> py;
        int d;
        cout << "Case " << i << ": ";
        d = sqrt(((cx - px) * (cx - px)) + ((cy - py) * (cy - py)));
        if (r >= d)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        i++;
    }
}