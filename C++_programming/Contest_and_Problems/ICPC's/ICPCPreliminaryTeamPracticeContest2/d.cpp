#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long i;
    for (i = 0;; i++)
    {
        if (stoll(to_string(i) + to_string(i)) > n)
        {
            cout << i - 1 << endl;
            return 0;
        }
    }
}
/*
 *
 Pritom_paul1920
 *
 */