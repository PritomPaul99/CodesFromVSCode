#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
        cout << "(" << i + 1 << "): " << rand() % 7 << endl;
    }

    return 0;
}
