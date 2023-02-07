#include <bits/stdc++.h>
using namespace std;

long long maxSum(long long n)
{
    long long ans = 1;
    while (n % 2 == 0)
    {
        n = n / 2;
        ans *= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            n = n / i;
            ans *= i;
        }
    }
    if (n > 2)
    {
        ans *= n;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << maxSum(n) << endl;
    }
    return 0;
}
