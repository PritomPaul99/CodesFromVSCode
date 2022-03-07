#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[10];
    while (t--)
    {
        /*for (int i; ; i++)
        {
            arr[i] = i;
        }*/

        int r;
        string s;
        cin >> s;
        cin >> r;
        while (r--)
        {
            int g,h;
            char a, b;
            cin >> a >> b;
            while (g++)
            {
                if (arr[g] == b - 'A')
                {
                    arr[g] = a - 'A';
                }
                while (h++)
                {
                    if (s[h] > 'Z' || s[h] < 'A')
                    {
                        cout << s[h];
                    }
                    else
                    {
                        cout << (arr[s[h] - 'A'] + 'A');
                    }
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}