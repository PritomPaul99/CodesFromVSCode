#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        int n;

        cin >> n;

        int arr[n], a = 0, b = 0, c = 0, d = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                b++;
            }
            else if (arr[i] == -1)
            {
                c++;
            }
            else if (arr[i] == 1)
            {
                d++;
            }
            else
            {
                a++;
            }
        }
        if (a > 1)
        {
            cout << "no" << endl;
        }
        else if (c > 1 && d == 0)
        {
            cout << "no" << endl;
        }
        else if (a == 1 && c >= 1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }

        return 0;
    }
}