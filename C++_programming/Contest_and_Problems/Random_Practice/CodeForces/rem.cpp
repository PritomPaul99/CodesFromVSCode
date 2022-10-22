//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        cin >> a >> b;

        if(a == -111 && b == -111)
        {
            return 0;
        }
        cout << a % b << endl;
    }
    return 0;
}
