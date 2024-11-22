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
        int v[t][2];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>v[i][j];
            }
        }
        int a = 0;
        if(v[0][0]>=v[0][1]){
            a = v[0][0];
        }
        else{
            a=v[0][1];
        }
        int p = 0;
        int p2 = a;
        for(int i=1;i<n;i++){
            if(v[i][1]>=v[i][0]){
                p=v[i][1];
            }
            else{
                p = v[i][0];
            }
            if(p>p2){
                a+=p;
                p2=p;
            }
            else{
                break;
            }
        }
        cout<<a<<'\n';
    }
}