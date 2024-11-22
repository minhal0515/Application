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
 
void solve([[maybe_unused]] int test) {
    
    int n,c,d;
    int x;
    cin>>n>>c>>d;
    vector <int> v;
    for(int i=0;i<n*n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    vector <int> k;
    int g=v[0];
    for(int i=0;i<n;i++){
        int t=g;
        for(int j=0;j<n;j++){
            k.push_back(t);
            t+=c;    
        }
        g+=d;
    }
    sort(k.begin(),k.end());
    int ans;
    for(int i=0;i<n*n;i++){
        if(v[i]==k[i]){
            ans=1;
        }
        else{
            ans = 0;
            break;
        }
    }
    if(ans==1){
        cout<<"yes"<<'\n';
    }
    else{
        cout<<"no"<<'\n';
    }

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}