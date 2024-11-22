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
    int j = 1;
    int f = 0;
    int x = 0;
    while(j<=n){
        j++;
        x++;   
        cout<<"cum";     
        if(j==v[x]){
            continue;
        }
        else if(v[x]==j+1 && j==v[x+1]){
            continue;
        }
        else if(j-1==v[x] && j==v[x-1]){
            continue;
        }
        else{
            f=1;
            break;
        }
    }
    
    if(f==1){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}