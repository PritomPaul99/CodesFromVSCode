
#include <bits/stdC++.h>
using namespace std;
typedef long long ll;
const int N = 2e3 + 5;
const int K = 2e3 + 5;
const int MOD = 1879048192;
int n, k, credits[N];
ll dp[N][K];
ll solve(int i, int sum)
{
    if (sum > k)
        return 0;
    if (i == n)
        return 1;
    if (dp[i][sum] != -1)
            return dp[i][sum];
    return dp[i][sum] = (solve(i + 1, sum) + solve(i + 1, sum + credits[i])) % MOD;
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> credits[i];
    memset(dp, -1, sizeof(dp));
    ll ret = 0;
    for (int i = 0; i < n; i++)
        ret = (ret + solve(i + 1, credits[i])) % MOD;
    cout << ret + 1 << "\n";
    return 0;
}