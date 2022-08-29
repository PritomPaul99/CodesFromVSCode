#include <bits/stdc++.h>
using namespace std;

#define inf 1001000009
#define infmx 1000000000002000000
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define MP make_pair
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)
#define all(x) x.begin(), x.end()
#define forn(n) for (int i = 0; i <= int(n); i++)
#define rep(p, s, n) for (int p = s; p <= int(n); p++)

/// debug
#define wh(x) cerr << #x << " is " << x << endl;
#define error(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
void err(istream_iterator<string> it)
{
    cout << endl;
}
template <class H, class... T>
void err(istream_iterator<string> it, H a, T... t)
{
    cout << *it << " = " << a << " | ";
    err(++it, t...);
}
template <class S, class T>
ostream &operator<<(ostream &os, pair<S, T> p)
{
    os << "[" << p.first << ", " << p.second << "]";
    return os;
};
template <class T>
auto &operator<<(ostream &os, vector<T> _v)
{
    bool a = 1;
    for (auto x : _v)
    {
        os << (a ? "" : " ") << x;
        a = 0;
    }
    return os;
}
template <class T>
auto &operator<<(ostream &os, set<T> _s)
{
    for (auto x : _s)
    {
        os << x << " ";
    }
    cout << endl;
    return os;
}
///
typedef pair<int, int> pi;
typedef pair<long long, long long> pll;
typedef pair<pi, int> ppi;
typedef pair<int, pi> pip;
typedef vector<int> vi;
typedef vector<pi> vpi;

inline void YN(bool f) { cout << (f ? "YES" : "NO") << endl; }
inline void Yn(bool f) { cout << (f ? "Yes" : "No") << endl; }
inline void yn(bool f) { cout << (f ? "yes" : "no") << endl; }
int bmark(int a, int pos) { return a | (1 << pos); }
bool bcheck(int a, int pos) { return a & (1 << pos); }
const int mod = 1e9 + 7;
// const int mod =  998244353;
ll power(ll a, ll p)
{
    ll r = 1, y = a;
    while (p)
    {
        if (p & 1)
            r = (1LL * r * y) % mod;
        p >>= 1;
        y = (1LL * y * y) % mod;
    }
    return r;
}
pi operator+(pi &p, pi &q)
{
    return MP(p.ff + q.ff, p.ss + q.ss);
}

/// precode end
const int N = 200002;
int ara[N];
bool check(vi &vc, int k)
{
    set<int> st;
    set<int> st2;
    for (auto x : vc)
    {
        bool ok = false;
        if (st.find(x) == st.end() && st.size() + 1 <= k)
        {
            st.insert(x);
            ok = true;
        }

        if (!ok && st2.find(x) == st2.end() && int(st2.size()) + 1 <= k)
        {
            st2.insert(x);
            ok = true;
        }
        // error(x,ok);
        if (!ok)
            return false;
    }
    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // file input.txt is opened in reading mode i.e "r"
    freopen("output.txt", "w", stdout); // file output.txt is opened in writing mode i.e "w"
#endif
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        int n, k;
        cin >> n >> k;
        vi vc;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            vc.pb(a);
        }
        bool ok = check(vc, k);
        cout << "Case #" << cs << ": ";
        YN(ok);
    }
}
