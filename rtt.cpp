#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,k;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    if(n==1){
        cout<<1<<'\n';
        return;
    }
    int m = 0;
    int c = 0;
    int d = 0;
    int u = -1;
    int m1 = 0;
    int max = 0;
    int count = 0;
    if(n%2==0){
        for(int i =0;i<n-1;i+=2){
            c = v[i+1]-v[i];
            if(c>m){
                m = c;
            }
        }
        cout<<m<<'\n';
    }
    else{
        for(int i=0;i<n-1;i+=2){
            d = v[i+1]-v[i];
            if(d>m1 and i%2==0){
                m1 = d;
                u=i;
            }
        }
        for(int i =0;i<n-1;i+=2){
            if(i==u){
                i++;
            }
            if(max<(v[i+1]-v[i])){
                max = (v[i+1]-v[i]);
            }
        }
        cout<<max<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}