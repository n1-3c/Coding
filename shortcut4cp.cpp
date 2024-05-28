/*

✎ nc

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

#define vi vc<int>
#define vvi vc<vi>
#define umap unordered_map
#define mp make_pair
#define maxar(arr) *max_element(all(arr))
#define minar(arr) *min_element(all(arr))

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ld EPS = 1e-9;

#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
