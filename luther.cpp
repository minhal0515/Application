#include "bits/stdc++.h"
#include <iostream>
#include <set>
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
 
// }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n,k;
        cin>>n>>k;
        int count = 0;
        int ans = 0;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<"YES"<<'\n'<<1<<'\n';
            continue;
        }
        for(int i=0;i<n;i++){
            count = 0;
            for(int j=0;j<n;j++){
                if(j==i){
                    continue;
                }
                int diff;
                diff = abs(v[i]-v[j]);
                if(diff%k==0){
                    continue;
                }
                else{
                    count++;
                }
            }
            if(count==n-1){
                ans = i+1;
                break;
            }
        }
        if(ans==0){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n'<<ans<<'\n';
        }
    }
}