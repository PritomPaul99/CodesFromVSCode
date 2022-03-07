#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    while (n--)
    {
        char ch[101];
        cin >> ch;
        int count1 = 0, count2 = 0;
        for (int i = 0; ch[i] != '\0'; i++)
        {
            count1++;
        }
        if (count1 <= 10)
        {
            cout << ch;
        }
        else
        {

            for (int i = 1; i < count1 - 1; i++)
            {
                count2++;
            }
            cout << ch[0] << count2 << ch[count1 - 1];
        }
        cout << endl;
    }
}