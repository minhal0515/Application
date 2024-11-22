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
    int b = 0;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int f = n-1;
    int y = 0;
    int c = 0;
    sort(v.begin(), v.end());
    int l = 0;
    int count = n-2;
    for(int r = 2;r<n;r++){
        while(r-l>=2 && v[l]+v[l+1]<=v[r]){
            l++;
        }
        count = min(count, n-(r-l+1));
    }
    cout<<count<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}