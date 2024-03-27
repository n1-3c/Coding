// imnc, on $CURRENT_DATE-$CURRENT_MONTH-$CURRENT_YEAR.

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
#define endl '\n'
#define sz(v) ((int)v.size())
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define usi unordered_set<int>
#define pii pair<int, int>
#define inf 2e18
#define rep(n) for (int _ = 0; _ < n; _++)
#define ar array
#define popc(a) __builtin_popcount(a)
#define gcd(a, b) __gcd(a, b)
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int max(int x, int y) { return x > y ? x : y; }
int min(int x, int y) { return x < y ? x : y; }
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

/*
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    return 0;
}
This one is when there is no need of test cases, in that case, no need of the next part.
*/
    
void sol()
{
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        sol();
        cout << endl;
    }
    return 0;
}
