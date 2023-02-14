#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        int count = 0;
        cin >> num;
        for (int i = 1; i<=num; i++)
        {
            int a[10];
            //cout << "Enter the number to convert: ";
            //cin >> n;
            for (int i = 0; num > 0; i++)
            {
                a[i] = num % 2;
                num = num / 2;
            }
            //cout << "Binary of the given number= ";
            for (i = i - 1; i >= 0; i--)
            {
                if(
                    
                )
                count++;
            }
        }
        cout << count << endl;
    }
}