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
    vector <int> v(n);
    vector <int> b(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
        b[i]=v[i];
    }
    int k=INT_MAX;
    sort(b.begin(),b.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]!=b[i]){
            count++;
            k=min(k,max(v[i]-b[0], b[n-1]-v[i]));
        }
    }
    if(count==0){
        cout<<-1<<'\n';
        return;
    }
    cout<<k<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}