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
        int n,x,y;
        cin>>n>>x>>y;
        int c = -1;
        vector <int> v(n);
        for(int i=y;i>=0;i--){
            v[i]=c;
            c=c*-1;
        }
        for(int i=y;i<x;i++){
            v[i]=1;
        }
        c=-1;
        for(int i=x;i<n;i++){
            v[i]=c;
            c=c*-1;
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<' ';
        }
        cout<<'\n';
    }
}