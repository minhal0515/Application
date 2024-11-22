#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
//     int n,m;
//     cin>>n;
//     int x;
//     vector <int> v;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         v.push_back(x);
//     }

// }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int x,y,k;
        cin>>x>>y>>k;
        int g;
        int f = 0;
        int a = (x+k-1)/k;
        int b = (y+k-1)/k;
        if(a<=b){
            cout<<2*b<<'\n';
        }
        else{
            cout<<2*a-1<<'\n';
        }
    }
}