#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 == 1)
        {
            cout << "Odd" << endl;
        }
        else
        {
            if (n % 4 == 2)
            {
                cout << "Same" << endl;
            }
            else
            {
                cout << "Even" << endl;
            }
        }
    }
}
/*
 *
 *Pritom_paul1920
 *
 */