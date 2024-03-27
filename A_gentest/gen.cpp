
#include <bits/stdc++.h>
#include <stack>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <unordered_map>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <random>

using namespace std;


#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define TIME        (1.0 * clock() / CLOCKS_PER_SEC)
#define all(a)      a.begin(),a.end()
#define endl        "\n"
#define all1(a)     a+1,a+n+1
#define unordered_map  map
#define ll          long long
#define ull         unsigned long long
// #define push_back   emplace_back
// #define gcd(a,b)    __gcd(a,b);
// #define lcm(a,b)    (a*b)/gcd(a,b);

const long long INF = (long long)1e9;
const long long MOD = (long long)1e9+7;
const long long MODD = 1e4; /// 998244353
const long long maxN = 3e5+9;
const int LOG = 21;
const int mlift = 58;


template<class A> inline int __lg(A &a) {  return static_cast<int>(log2(a));}
template<class A,class B> inline void add(A &a,B b) { a+=b;while (a>=MOD) a-=MOD;}
template<class A,class B> inline void minus(A &a,B b) { a-=b;while (a>=MOD) a-=MOD;while (a<0) a+=MOD;}






///--------------------[PROBLEM SOLUTION]--------------------///




mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
ll rand(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rd);}


struct DSU {
    int n;
    vector<int> par, rnk;
 
    DSU(int _n) {
        n = _n;
        par.assign(n + 1, 0);
        rnk.assign(n + 1, 0);
 
        for (int i = 0; i <= n; i++)
            par[i] = i, rnk[i] = 1;
    }
 
    int root(int u) {
        return (par[u] == u ? u : par[u] = root(par[u]));
    }
 
    bool unite(int x, int y) {
        int u = root(x), v = root(y);
 
        if (u == v) return false;
        if (rnk[u] < rnk[v]) swap(u, v);
 
        par[v] = u;
        rnk[u] += rnk[v];
 
        return true;
    }
};

int main(int argc, char* argv[]){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




    // mt19937 rng(atoi(argv[1]));
    long long n=rand(1,1e4),p=rand(1,1e4), q=rand(p,1e4);
    // int k=rand(0,30);
    // // long long x=atoi(argv[3]);

    cout << n << ' ' << p << ' ' << q << '\n';


    // //array
    for (int i = 1; i <= n; i++) {
        int x=rand(1,1e6);
        cout << x << " ";
    }
    // cout << '\n';





    // tree
    // DSU ds(n);
    // for (int i = 1; i <= n; i++)
    //     ds.par[i] = i;
    
    // long long c = n;
    // while (c > 1) {
    //     long long u = rand(1,n), v = rand(1,n);
        
    //     if (ds.unite(u, v))
    //         c--, cout << u << " " << v << '\n';
    // }




    //permutation
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) 
    //     v[i] = i + 1;

    // random_shuffle(v);

    // for (int i = 0; i < n; i++)
    //     cout << v[i] << " ";
    // cout << '\n';

    return 0;
}


















