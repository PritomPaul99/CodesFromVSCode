#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int p[500];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << p[j] << " ";
        }
        cout << p[i];
        cout << endl;
    }
}