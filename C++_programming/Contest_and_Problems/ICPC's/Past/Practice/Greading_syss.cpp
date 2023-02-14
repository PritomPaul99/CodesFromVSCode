#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    int g;
    while (n--)
    {
        cin >> g;
        cout << "Student " << i << ": ";
        if (g >= 90)
        {
            cout << "A+" << endl;
        }
        else if (g >= 80 && g < 90)
        {
            cout << "A" << endl;
        }
        else if (g >= 70 && g < 80)
        {
            cout << "A-" << endl;
        }
        else if (g >= 60 && g < 70)
        {
            cout << "B+" << endl;
        }
        else if (g >= 50 && g < 60)
        {
            cout << "B-" << endl;
        }
        else if (g >= 40 && g < 50)
        {
            cout << "C" << endl;
        }
        else if (g >= 35 && g < 40)
        {
            cout << "D" << endl;
        }
        else if (g < 35)
        {
            cout << "F" << endl;
        }
        i++;
    }
}
