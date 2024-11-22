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
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max1 = 0;
    int max2 = 0;
    int c1 = 0;
    int c2 = 0;
    for(int i=0;i<n;i+=2){
        if(v[i]>max1){
            max1 = v[i];
        }
        c1++;
    }
    for(int i=1;i<n;i+=2){
        if(v[i]>max2){
            max2 = v[i];
        }
        c2++;
    }
    int s1 = max1+c1;
    int s2 = max2+c2;
    int ans = max(s1,s2);
    cout<<ans<<'\n';
}

int32_t main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
