#include <bits/stdc++.h>

using namespace std;

bool ifAsen(int arr[]);
bool ifdesen(int arr[]);

int main()
{
    int T, i, arr[10];
    cin >> T;
    cout << "Lumberjacks:\n";
    while (T--)
    {
        for (i = 0; i <= 9; i++)
        {
            cin >> arr[i];
        }
        if (ifAsen(arr) || ifdesen(arr))
        {
            cout << "Ordered\n";
        }
        else
        {
            cout << "Unordered\n";
        }
    }
    return 0;
}

bool ifAsen(int arr[])
{
    int i;
    for (i = 0; i <= 8; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

bool ifdesen(int arr[])
{
    int i;
    for (i = 0; i <= 8; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            return false;
        }
    }
    return true;
}