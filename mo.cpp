#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int l,r,k;
        cin>>l>>r>>k;
        if((r/l)<k){
            cout<<0<<'\n';
            continue;
        }
        int ans = 0;
        ans = r/k;
        ans = ans-l+1;
        cout<<ans<<'\n';
    }
}
