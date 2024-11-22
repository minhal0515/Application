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
    int g = v[n-1];
    int m = 0;
    bool flacko = false;
    for(int i=0;i<n;i++){
        if(m<v[i]){
            m = v[i];
            if(i==n-1){
                flacko=true;
            }
        }
    }
    sort(v.begin(),v.end());
    //cout<<v[n-2];
    if(flacko == true){
        cout<<m+v[n-2]<<'\n';
    }
    else{
        cout<<m+g<<'\n';
    }
}
    
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}