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
    x = 2*n;
    vector <int> v(x);
    
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int co = 0;
    int cb = 0;
    for(int i=0;i<x;i++){
        if(v[i]==0){
            co++;
        }
        else{
            cb++;
        }
    }
    int min = 0;
    int max = 0;
    if(co%2!=0 || cb%2!=0){
        min = 1;
    }
    else{
        min = 0;
    }
    if(co<=cb){
        max = co;
    }
    else{
        max = cb;
    }
    cout<<min<<' '<<max<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}