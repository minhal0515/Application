#include "bits/stdc++.h"
#include <cstdint>
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
        int n;
        cin>>n;
        if(__builtin_popcountll(n)==1){
            cout<<1<<' '<<n<<'\n';
            continue;
        }
        int r = __builtin_popcountll(n) + 1;
        cout<<r<<'\n';
        for(int i = 0;i<r;i++){
            int count = 0;
            int cur = 0;
            int sum = 0;
            for(int l = 62;l>=0;l--){
                if(n&(1ll<<l)){
                    count++;
                    if(count<=i){
                        sum+=(1ll<<l);
                    }
                    else{
                        if(cur==1){
                            sum+=(1ll<<l);
                        }
                        cur = 1-cur;
                    }
                }
            }
            cout<<sum<<' ';
        }
        cout<<'\n';
    }
}
