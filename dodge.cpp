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
   // cin>>n;
    int p,q;
    cin>>p>>q;
    // if((p/2==q/3)&&(p%2==0&&q%3==0)&&p>1){
    //     cout<<"Bob"<<'\n';
    // }
    int dif = q-p;
    if(dif<=0){
        cout<<"Alice"<<'\n';
        return;
    }
    if(p>=2*dif){
        cout<<"Bob"<<'\n';
    } else{
        cout<<"Alice"<<'\n';
    }

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}