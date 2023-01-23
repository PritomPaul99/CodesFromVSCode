#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    string s;
    cin >> s;

    int f = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            if(f != 0){
                continue;
            }
            f = 1;
            cout << "integer ";

        }
        else
        {
            cout << "operator ";
            f = 0;
        }
    }

    return 0;
}
