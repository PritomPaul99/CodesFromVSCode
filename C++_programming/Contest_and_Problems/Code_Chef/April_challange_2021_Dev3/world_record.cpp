#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;

        float x;

        x = 100 / (k1 * k2 * k3 * v);

        float value = (/*(int)*/ (x * 100 + .5));

        float value2 = /*(float)*/ value / 100;

        cout << "Value2: " << value2 << endl;

        if (value2 < 9.58)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}