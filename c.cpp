#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,s,m;
    cin>>n>>s>>m;
    int x,y;
    vector <int> l;
    vector <int> r;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        l.push_back(x);
        r.push_back(y);
    }
    int fl = 0;
    if(l[0]>=s or (m-r[n-1]>=s)){
            cout<<"YES"<<'\n';
            return;
        }
    for(int i=0;i<n-1;i++){
        if(l[i+1]-r[i]>=s){
            fl=1;
            break;
        }
        
    }
    if(fl==1){
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
