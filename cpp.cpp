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
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        int m;
        int mid;
        vector <int> x;
        for(int i=0;i<n;i++){
            cin>>m;
            x.push_back(m);
        }
        int c1 = 0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(x[i]<x[i+1]){
                int an = (x[i] & x[i+1]);
                int o = (x[i]|x[i+1]);
            //cout<<an<<o;
                if(an*2<o){
                    c1++;
                }
                if(c1>ans){
                    ans = c1;
                }
            }
            else{
                c1=0;
            }
            
        }
        cout<<(ans)<<'\n';

    }
}