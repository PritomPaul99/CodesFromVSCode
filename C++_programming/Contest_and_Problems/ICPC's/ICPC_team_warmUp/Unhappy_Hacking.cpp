#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int j = 0;
    char a[12], b[12];

    for (int i = 0; i < strlen(a); i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '0')
        {
            b[j++] = '0';
        }
        if (a[i] == '1')
        {
            b[j++] = '1';
        }
        if (a[i] == 'B' && i != 0 && j != 0)
        {
            j--;
        }
    }
    b[j] = '\0';

    for (int i = 0; i < strlen(b); i++)
    {
        cout << b[j];
    }
}
