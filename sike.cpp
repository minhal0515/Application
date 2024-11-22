#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n;
    int k = 1;
    int count = 0;
    int ans = 0;
    int min = 0;
    vector <int> a;
    scanf("%lld", &n);
    int d,s;
    map<int,int> d1;
    for(int i=0;i<n;i++)
    {
        cin>>d>>s;
        d1.insert(pair<int,int>(d,s));
    }
    
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}