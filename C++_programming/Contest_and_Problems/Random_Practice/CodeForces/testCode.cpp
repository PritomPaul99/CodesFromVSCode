#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, flag;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        flag = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (a[i + 1] < a[i])
            {                                                                                             
                flag = 1;
                break;
                //added new line
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}