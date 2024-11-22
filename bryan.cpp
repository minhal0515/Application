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
        int a, b;
        cin>>a>>b;
        int f = 0;
        if(a==0 and (b%2!=0 or b==1)){
            f=1;
        }
        else if(a==1 or a%2!=0){
            f=1;
        }
        if(f==1){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
    }
}