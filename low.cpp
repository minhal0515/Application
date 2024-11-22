#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int r = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(v[i]>=k){
            r+=v[i];
        }
        if(v[i]==0){
            if(r>0){
                count++;
                r--;
            }
        }
    }
    cout<<count<<'\n';


}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}