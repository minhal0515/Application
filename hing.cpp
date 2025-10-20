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
    vector <int> v;
//    int m = INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        // if(x<m){
        //     m=x;
        // }
        v.push_back(x);
    }
    int f = 0;
    int ff = 0;
    int count = 0;
    int m = v[0];
    for(int i=1;i<n;i++){
        int d = 0;
        if(v[i]<m){
            m=v[i];
        }
        if(v[i-1]==m || v[0]==m){
            ff=1;
        }
        if(v[i]>v[i-1]){
            d=v[i]-v[i-1];
            if((ff==1 && v[i]-m>=m)||d>=v[i-1]){
                f=1;
            }
        }
     //   cout<<d<<m;
    }
    if(f==0){
        cout<<"YES"<<'\n';
    } else{
        cout<<"NO"<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}