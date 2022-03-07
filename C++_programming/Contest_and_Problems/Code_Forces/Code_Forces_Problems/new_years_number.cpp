#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if ((n % 2020) <= (n / 2020))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}