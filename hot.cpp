#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m,k;
    cin>>n;
    int x;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int max = 0;
    for(int i=0;i<n;i++){
        if(i%2!=0 or i==1){
            continue;
        }
        if(v[i]>max){
            max = v[i];
        }
    }
    cout<<max<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
