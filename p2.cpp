#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m;
    cin>>n;
    //vector <int> v;
    string v;
    cin>>v;
    int count=0;
    int ans = n;
    if(v[0]=='1'){
        ans++;
        count++;
        //cout<<"?";
    }
    for(int i=0;i<n-1;i++){
       // if(v[0]==1)
        if(v[i]!=v[i+1]){
            count++;
            ans++;
        }
    }
    if(count>=3){
        ans = ans-2;
    }
    else if(count==2){
        ans = ans-1;
    }
    cout<<ans<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}