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
    int x;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int e=0;
    int o=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            e = 1;
        }
        else if(v[i]%2!=0 or v[i]==1){
            o=1;
        }
    }
    if(e==1 and o==1){
        cout<<-1<<'\n';
        return;
    }
    int y;
    vector <int> a;
    for(int i=29;i>=0;i--){
        y=(1ll<<i);
        a.push_back(y);
    }
    if(e==1){
        a.push_back(1);        
    }
    cout<<a.size()<<'\n';
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';


}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
