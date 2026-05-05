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
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n,x;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int count =0;
        for(int i=0;i<n-1;i++){
            if(abs(v[i]-v[i+1])==__gcd(v[i],v[i+1])){
                count++;
            }
        }
        cout<<count<<'\n';
    }
}