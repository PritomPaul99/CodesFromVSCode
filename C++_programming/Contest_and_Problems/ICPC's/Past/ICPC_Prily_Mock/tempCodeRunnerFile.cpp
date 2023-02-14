#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[10];
        int result = 0;
        int i, k;

        cin >> k;

        for (i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        result = arr[0] * arr[k - 1];

        cout << "result: "<< result;
    }
}