#include "bits/stdc++.h"
 
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
        int l,r;
        cin>>l>>r;
        if(l==r){
            cout<<1<<'\n';
            continue;
        }
        int a = 1;
        int count = 0;
        while(l<=r){
            l+=a;
            count++;
            a++;
        }
        cout<<count<<'\n';
    }
}