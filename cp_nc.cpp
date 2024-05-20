/*

✎ nc ... (DD.MM.YYYY)

*/

#ifndef LOCAL
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#endif

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

#define vi vc<int>
#define maxar(arr) *max_element(all(arr))
#define minar(arr) *min_element(all(arr))

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

unsigned long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

unsigned long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

unsigned long long lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int find_mex(const std::vector<int>& vec) {
    std::unordered_set<int> unique_elements(vec.begin(), vec.end());
    int mex = 0;
    while (unique_elements.find(mex) != unique_elements.end()) {
        mex++;
    }
    return mex;
}

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
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
    //code here
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
