#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#define all(x) (x).begin(), (x).end()
#endif
 
using namespace std;
typedef long long ll;
 
void solve([[maybe_unused]] int test) {
    ll n;
    ll m;
    cin>>n>>m;
    set<ll> s;
    ll mex = 0;
    for(int i=0;i<n;i++){
        ll len;
        cin>>len;
        while(len>0){
            ll num;
            cin>>num;
            s.insert(num);
            len--;
        }
        int y = 0;
        ll j = 0;
        while(true){
            if(s.find(j)==s.end()){
                if(y==0){
                    y=1;
                }
                else{
                    mex = max(mex,j);
                    break;
                }
            
        }
        j++;
        }
        s.clear();
    
    }

    if(mex>=m){
        cout<<(m+1)*mex<<'\n';
    }
    else{
        cout<<mex*(mex+1)+(m*(m+1))/2 - (mex*(mex+1))/2<<'\n';
    }

}
 
int32_t main() {
    int t = 1;

    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}