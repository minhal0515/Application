#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector <int> v2;
        for(int i=0;i<n;i++){
            auto it = upper_bound(v2.begin(), v2.end(), v[i]);
            if(it==v2.end()){
                v2.push_back(v[i]);
            } else{
                v2[it-v2.begin()]=v[i];
            }
        }
        cout<<v2.size()<<'\n';
    }
}