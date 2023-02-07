#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int t, n, m, d, p[N], a[N], cnt[N];

bool cmp(int x, int y)
{
    return cnt[x] < cnt[y];
}


int main()
{
    cin >> t;
    while (t--)
    {
        memset(cnt, 0, sizeof cnt);
        cin >> n >> m >> d;
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        for (int i = 1; i <= m; i++)
            cin >> a[i], cnt[a[i]] = p[a[i]];
        sort(a + 1, a + m + 1, cmp);
        int ans = 0;
        for (int i = 1; i <= m - 1; i++)
        {
            int j = i;
            while (j <= m && cnt[a[j]] - cnt[a[i]] <= d)
                j++;
            ans = max(ans, j - i);
            i = j - 1;
        }
        cout << m - ans << endl;
    }
    return 0;
}
