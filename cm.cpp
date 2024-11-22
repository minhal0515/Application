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
    cin>>n;
    string v;
    cin>>v;
    int f = 0;
    if(v[0]=='1' or v[n-1]=='1'){
        //f=1;
        cout<<"YES"<<'\n';
        return;
    }
    for(int i=0;i<n-1;i++){
        if(v[i]=='1' && v[i]==v[i+1]){
            f=1;
        }
    }
    if(f==1){
        cout<<"YES"<<'\n';
    }
    else{
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