#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[10];
    while (t--)
    {
        for (int i;; i++)
        {
            arr[i] = i;
        }

        int r;
        string s;
        cin >> s;
        cin >> r;
        while (r--)
        {
            char a, b;
            cin >> a >> b;
            for (int i;; i++)
            {
                if (arr[i] == b - 'A')
                {
                    arr[i] = a - 'A';
                }
                for (int i;; i++)
                {
                    if (s[i] > 'Z' || s[i] < 'A')
                        cout << s[i];
                    else
                        printf("%c", arr[s[i] - 'A'] + 'A');
                }
                cout<<endl;
            }
        }
    }
    return 0;
}