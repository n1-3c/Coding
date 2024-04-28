/*

✎ nc ... (date)

*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define all(a) a.begin(), a.end()
#define pb push_back
#define sz(a) ((int)a.size())
#define endl '\n'
#define gcd(a, b) __gcd(a, b)
#define popc(a) __builtin_popcount(a)
#define int int64_t

using i32=int32_t;
using u32=unsigned int;
using u64=unsigned long long;
using ld=long double;
using i128=__int128;
using u128=unsigned __int128;
using pii = pair<int, int>;

template <typename T>
using vc = vector<T>;

#define maxar(arr) *max_element(all(arr))
#define minar(arr) *min_element(all(arr))

const int MAX = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

#define arrin(arr, n)              \
    do                              \
    {                               \
        for (int i = 0; i < n; i++) \
        {                           \
            cin >> arr[i];          \
        }                           \
    } while (0)

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void sol()
{
    // code begins here.
}

signed main()
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
