#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <algorithm>
#include <string>
#include <queue>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <deque>
#include <random>
#include <sstream>



// https://oj.vnoi.info/problem/icpc23_mn_a


using namespace std;

#define file(name) freopen(name".inp","r",stdin);\
                    freopen(name".out","w",stdout);
#define TIME (1.0*clock()/CLOCKS_PER_SEC)
#define all(a) a.begin(),a.end()
#define all1(a) a+1,a+n+1
#define ll long long

const long long INF=1e9;
const long long MOD=1e9+7;
const long long MODD=111539786; // 998244353
const int maxN=1e5+9;
const short LOG=30;


//------------------------



void solve();
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        file("ducminh");
    #endif

    // file("moji");



    int t;

    cin >> t;

    // t=1;

    while (t--){
        solve();
    }

    cerr << "Time: " << TIME << "s.\n";
    cerr << "ducminh";
    return 0;
}

/// -------------- PROBLEM SOLUION --------------------



int a[1000009];
void solve() {


    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        cin >> a[i];
    }

    sort(a+1,a+n+1);



    if (n==2 && abs(a[1]-a[2])==1) { 
        if (a[2]%2==0) cout << "RR\n";
        else cout << "Hieu\n";

        return void();
    }

    if (n==1){
        if (a[1]==1) cout << "RR\n";
        else cout << "Hieu\n";

        return void();
    }



    if (abs(a[n]-a[n-1])==1 && a[n]%2==n%2) cout << "RR\n";
    else cout << "Hieu\n";




}
