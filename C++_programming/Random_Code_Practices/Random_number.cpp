#include <bits/stdc++.h>

using namespace std;

int main()
{

    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        cout << "(" << i + 1 << "): " << 1 + (rand() % 5) << endl;
    }

    return 0;
}
