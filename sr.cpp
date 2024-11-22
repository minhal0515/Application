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
    vector <int> b;
    vector <int> a(n);
    int x;
    for(int i=0;i<n-1;i++){
        cin>>x;
        b.push_back(x);
    }

    int mc = 0;
    a[0]=b[0];
    for(int i=1;i<n-1;i++){
        a[i] = (b[i-1] | b[i]);
        if((a[i-1] & a[i])!=b[i-1]){
            mc = 1;
            break;
        }
    }
    a[n-1]=b[n-2];
    if(mc == 1){
        cout<<-1<<'\n';
    }
    else{
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
