#include "bits/stdc++.h"
#include <iostream>
#include <set>
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
        int a,b,c;
        cin>>a>>b>>c;
        int ans = 0;
        int bol = 1;
        int flacko = 1;
        int x = b%3;
        int ol = 0;
        if(x==0){
            flacko = 0;
        }
        if(x==1 and c<2){
            ol = 1;
        }
        if(x==2 and c<1){
            ol=1;
        }
        if(flacko == 1 and ol==1){
            bol = 0;
        }
        b = b+x;
        c = c-x;
        int q = (b+c)/3;
        int rem = (b+c)%3;
        int r = rem;
        if(r == 2){
            r=1;
        }
        ans = ans+a+q+r;
        if(bol == 1){
            cout<<ans<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
}