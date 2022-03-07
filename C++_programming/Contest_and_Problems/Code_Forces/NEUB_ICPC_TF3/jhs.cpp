#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, o = 0, t = 0;
        cin >> n;
        while (n--)
        {
            cin >> a;
            if (a == 1)
                ++o;
            else
                ++t;
        }
        cout << ((o % 2 || (o == 0 && t % 2)) ? "NO" : "YES") << endl;
    }
}