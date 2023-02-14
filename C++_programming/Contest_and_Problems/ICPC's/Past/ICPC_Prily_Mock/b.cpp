#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m = 0;
        int k;
        int arr[100];
        int result = 0;
        cin >> k;
        int i;
        for (i = 0; i < k; i++)
        {
            scanf("%d", &arr[i]);
        }
        if (k == 1)
        {
            result = arr[i] * arr[i + 1];
        }
        else
        {
            result = arr[i] * arr[i];
        }
        m++;
        cout << "Case " << m << ": " << result;
    }
}