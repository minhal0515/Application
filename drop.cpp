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
        int a,b;
        cin>>a>>b;
        cout<<b-a<<'\n';
    }
}