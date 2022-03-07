#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100], b[100];
    int check1[100], check2[100];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = a[i], j = 0; k <= b[i]; k++, j++)
        {
            check1[j] = k;
            cout << k << " ";
            //cout << "Check1: " << endl;
        }
        cout << endl;
    }
}