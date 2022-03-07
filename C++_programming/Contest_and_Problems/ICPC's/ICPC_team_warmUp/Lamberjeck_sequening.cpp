#include <bits/stdc++.h>

using namespace std;

bool isInc(int arr[])
{
    int i;
    for (i = 0; i <= 8; i++)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}

bool isDec(int arr[])
{
    int i;
    for (i = 0; i <= 8; i++)
        if (arr[i] < arr[i + 1])
            return false;
    return true;
}

int main()
{

    int T, i, arr[10];
    cin >> T;
    cout << "Lumberjacks:\n";
    while (T--)
    {
        for (i = 0; i <= 8; i++)
            cin >> arr[i];
        if (isInc(arr) || isDec(arr))
            cout << "Ordered\n";
        else
            cout << "Unordered\n";
    }
    return 0;
}