#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <string>
#include <queue>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <deque>
#include <random>
#include <unordered_map>
#include <bitset>
#include <cstdlib>  
#include <ctime>


using namespace std;

#define file(name) freopen(name".inp","r",stdin);\
					freopen(name".out","w",stdout);
#define TIME (1.0*clock()/CLOCKS_PER_SEC)
#define endl "\n"
#define all(a) a.begin(),a.end()
#define all1(a) a+1,a+n+1
#define ll long long

const long long INF=1e9;
const long long MOD=1e9+7;
const long long MODD=998244353;
const int maxN=2e5+9;
const int LOG=30;

//------------------------


void solve();

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


    freopen("ducminh.inp", "w", stdout); 



	int t;

	// cin >> t;
	
	t=1;

	while (t--){
		solve();
	}

	return 0;
}

/// -------------- PROBLEM SOLUION --------------------



mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
ll rand(ll l, ll r){
	return uniform_int_distribution<ll>(l,r)(rd);
}


struct DSU{
	int n;
	vector<int> truoc,rnk;

	DSU (int _n){
		n=_n;
		truoc.assign(n+1,0);
		rnk.assign(n+1,0);

		for (int i=0; i<=n; i++){
			truoc[i]=i;
			rnk[i]=1;
		}
	}

	long long root(int u){
		if (truoc[u]==u) return u;

		return truoc[u]=root(truoc[u]);
	}

	bool hop(int x, int y){
		int u=root(x), v=root(y);

		if (u==v) return false;
		if (rnk[u]<rnk[v]) swap(u,v);
		truoc[u]=v;
		rnk[u]+=rnk[v];

		return true;
	}
};


const int N=200000;
vector<int> gen_multiples(int x) {
	int cur = 1, rem = 1;
	vector<int> res;
	for (int i = 1; i <= N; i++) {
		assert(1 <= cur && cur <= 1e9);
		res.push_back(cur);
		cur += x;
		if (cur > 1e9) {
			++rem;
			cur = rem;
		}
	}
	return res;
}

void rannn(std::vector<int>& arr) {
    // Sử dụng một bộ sinh số ngẫu nhiên
    std::random_device rd;  
    std::mt19937 g(rd());

    for (int i = arr.size() - 1; i > 0; --i) {
        // Sinh ra một chỉ số ngẫu nhiên trong khoảng [0, i]
        std::uniform_int_distribution<int> dis(0, i);
        int j = dis(g);

        // Hoán đổi arr[i] và arr[j]
        std::swap(arr[i], arr[j]);
    }
}






int a[1009];
int mm[109];
void solve(){


	long long n=rand(1,10), m=rand(n,1000), k=rand(1,10), q=rand(1,10000), s=rand(1,10), h=rand(1,100000), p=rand(1,10);

	cout << 1 << "\n";
	for (int i=1; i<=n; i++){
		int c=rand(0,25);
		cout << char('a'+c);
	}
	

    //permutation
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) 
    //     v[i] = i + 1;

    // rannn(v);

    // for (int i = 0; i < n; i++)
    //     cout << v[i] << " ";
    // cout << '\n';


    // while (k--){
	// 	int a=rand(1,n-1);
	// 	cout << a << ' ' << rand(a+1,n) << "\n";
    // }

    // tree
    // DSU ds(n+1);
    // for (int i = 0; i <= n; i++)
    //     ds.truoc[i] = i;
    
    // long long c = n;
    // while (c > 1) {
    //     long long u = rand(1,n), v = rand(1,n);
        
    //     if (ds.hop(u, v))
    //         c--, cout << u << " " << v << '\n';
    // }




}

















