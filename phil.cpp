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
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int l = (2*v[0]-v[1])/(n+1);
    int r = v[1]-v[0]+l;
    if(l<0 || r<0){
        cout<<"NO"<<'\n';
        return;
    }
    for(int i=0;i<n;i++){
        v[i]-=(i+1)*r;
        v[i]-=(n-i)*l;
    }
    int philsalt=1;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            philsalt=0;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<' ';
    // }
    if(philsalt==1){
        cout<<"YES"<<'\n';
    } else{
        cout<<"NO"<<'\n';
    }

}
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}