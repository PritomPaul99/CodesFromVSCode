#define max_el(arr, size) *max_element(arr, arr + size)
#define ain(arr, n) fo(i, n) cin >> arr[i]
#define aout(arr, n) fo(i, n) cout << arr[i] << " "
#define find_(a, n, x) find(a, a + n, x) - a
// cout << fixed << setprecision(__n) << x << endl;
#define FSP(x) fixed << setprecision(x)
#define pop_cnt(n) __builtin_popcount(n) // Assign it to a value to find the number of 1 in a binary number
#define numBits(n) log2(n) + 1           // Assign it to a value to get the number of bits in an integer
#define DigitNum(n) log10(n) + 1         // Assign it to a value to get the number of digit in an integer
// Vector
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define pb push_back
// debug
#define cpoint cout << "_________________CHECK POINT_________________\n";
#define _debug(x) cout << x << endl
#define Yes printf("Yes\n")
#define No printf("No\n")
#define YES printf("YES\n")
#define NO printf("NO\n")

using namespace std;

const int N = 3e5 + 7;
vector<int> vis(N, 0);
vector<int> g[N];
vector<int> dp(N, 1);
vector<int> ans(N, 0);
int mn = 1e9 + 7;

void dfs(int vertex)
{
    vis[vertex] = 1;
    for (auto child : g[vertex])
    {
        if (vis[child])
            continue;
        dfs(child);
        dp[vertex] += dp[child];
    }
}

void modfs(int vertex)
{
    vis[vertex] = 1;
    for (auto child : g[vertex])
    {
        if (vis[child])
            continue;

        //if (!(dp[child] - 1))
            //mn = min(mn, ans[child]);

        //if (g[vertex].size() == 3)