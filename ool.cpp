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
    int m;
    int k;
    cin>>n>>m>>k;
    int x;
    vector <int> n1;
    vector <int> m1;
    for(int i=0;i<n;i++){
        cin>>x;
        n1.push_back(x);
    }  

    for(int i=0;i<m;i++){
        cin>>x;
        m1.push_back(x);
    }

    int count = 0;

    for(int i=0;i<n1.size();i++){
        if (n1[i]<k){
            for(int j=0;j<m1.size();j++){
                if(n1[i]+m1[j]<=k){
                    count++;
                }
            }
        }
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