#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m,q;
    cin>>n>>m>>q;
    int b1, b2;
    cin>>b1>>b2;
    int a;
    cin>>a;
    int ans = 0;
    int max = 0;
    if(a>b1 and a>b2){
        if(b1>b2){
            max = a-b1;
        }
        else{
            max = a-b2;
        }
        ans = n-a + max;
    }
    else if(a<b1 and a<b2){
        if(b1>b2){
            max = b2-a;
        }
        else{
            max = b1-a;
        }
        ans = a-1 + max;
    }
    else{
        if(abs(a-b1)<abs(a-b2)){
            int l=abs(a-b2);
            int u = abs(a-b1);
            int lou = l-u;
            max+=(lou+2-1)/2;
            if(lou%2!=0){
                max+=u-1;
            }
            else{
                max+=u;
            }
        }
        else if((abs(a-b1)>abs(a-b2))){
            int l=abs(a-b2);
            int u = abs(a-b1);
            int lou = u-l;
            max+=(lou+2-1)/2;
            if(lou%2!=0){
                max+=l-1;
            }
            else{
                max+=l;
            }
        }
        else{
            max = abs(a-b1);
        }
        ans = max;
    }
    cout<<ans<<'\n';


}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}