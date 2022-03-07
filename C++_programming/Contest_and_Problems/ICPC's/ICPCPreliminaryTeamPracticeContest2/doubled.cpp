#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long i;
    while (1)
    {
        if (stoll(to_string(i) + to_string(i)) > n)
        {
            cout << i - 1 << endl;
            return 0;
        }
        i++;
    }
}