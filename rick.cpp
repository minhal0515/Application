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
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }
    int count = 0;
    sort(v.begin(),v.end());
    for(int i=n-1;i>0;i--){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            break;
        }
    }
    count=count+1;
    if(count%2==0 and count!=1){
        cout<<"NO"<<'\n';
    }    
    else{
        cout<<"YES"<<'\n';
    }
 
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}