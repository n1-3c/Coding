/*

written by @imnc

*/

#ifndef LOCAL
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#endif

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

//macros for ds declaration and operations
#define vi vc<int>
#define vvi vc<vi>
#define umap unordered_map
#define mp make_pair
#define maxar(arr) *max_element(all(arr))
#define minar(arr) *min_element(all(arr))
#define viit vi::iterator
#define itr ::iterator

#define all(a) a.begin(), a.end()
#define lla(a) a.rbegin(), a.rend()
#define pb push_back
#define sz(a) ((int)a.size())
#define endl '\n'
#define gcd(a, b) __gcd(a, b)
#define popc(a) __builtin_popcount(a)

//datatypes short forms
using ll = long long;
using i32=int32_t;
using u32=unsigned int;
using u64=unsigned long long;
using ld=long double;
using i128=__int128;
using u128=unsigned __int128;
using pii = pair<int, int>;

template <typename T>
using vc = vector<T>;

//commonly required functions
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

unsigned long long nCr(int n, int r) {
        long long res = 1;
for (int i = 0; i < r; i++) {
    res = res * (n - i);
    res = res / (i + 1);
}
return res;
}

unsigned long long nPr(int n, int r) {
        long long res = 1;
for (int i = 0; i < r; i++) {
    res = res * (n - i);
}
return res;
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

//global constant variables
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ld EPS = 1e-9;

// Function to convert __int128 to string
std::string int128ToString(__int128 value) {
    if (value == 0) return "0";

    bool negative = value < 0;
    std::string result;

    while (value != 0) {
        int digit = value % 10;
        result = static_cast<char>('0' + (negative ? -digit : digit)) + result;
        value /= 10;
    }

    if (negative) {
        result = '-' + result;
    }

    return result;
}

// Overload the operator<< for __int128
std::ostream& operator<<(std::ostream& os, __int128 value) {
    os << int128ToString(value);
    return os;
}

//macro for taking a vector as a input
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

// code


auto init = []()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
