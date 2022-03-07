
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[100], b[100];
    int j = 0;

    cin >> a;

    int lenth = strlen(a);

    for (int i = 0; i < lenth; i++)
    {
        if (a[i] == 'B')
        {
            j--;
            if (j < 0)
            {
                j = 0;
            }
        }
        else
            b[j++] = a[i];
    }
    b[j] = '\0';

    cout << b;

    return 0;
}