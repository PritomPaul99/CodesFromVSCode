#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    string s;
    getline(cin, s);

    int f1 = 0, f2 = 0, f3 = 0, id = 0;

    for (int i = 0; i < s.size(); i++)
    {
        string a = s.substr(i, 3);
        string b = s.substr(i, 5);
        string c = s.substr(i, 6);

        if ((a == "int" || b == "float" || c == "double") && (f1 == 0))
        {
            cout << "datatype ";
            if (s[i] == 'i')
            {
                i += 3;
            }
            else if (s[i] == 'f')
            {
                i += 5;
            }
            else
            {
                i += 6;
            }
            f1 = 1;
        }
        
        if (f1 == 1)
        {
            cout << "variable ";
            f1 = 0, f2 = 1;
        }
        else if (f2 == 1)
        {
            if (s[i] == '=')
            {
                cout << "operator ";
            }
            f2 = 0, f3 = 1;
        }
        else if (f3 == 1)
        {
            int brk = 0;
            for (int j = 0;; j++)
            {
                if (s[j] == ';')
                {
                    brk = 1;
                    break;
                }
                if (s[j] == '.')
                {
                    id = 1;
                }
            }

            if(id == 1)
            {
                cout << "float ";
                id = 0;
            }
            else
            {
                cout << "int ";
            }
        }
    }

    // cout << s << '\n';

    return 0;
}
