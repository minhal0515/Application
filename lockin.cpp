#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    int c = 3;
    int count = 0;
    while(c<=n){
        count++;
        c=c*3;
    }
    int cost = 0;
    int u = n;
    while(u>=3){
       //cout<<u<<' '<<pow(3,count)<<' ';
        if(u<pow(3,count)){
            while(u<pow(3,count)){
                count--;
            }
        }
        u=u-pow(3,count);
        cost+=pow(3,count+1)+count*(pow(3,count-1));
    }
    cost=cost+u*(3);
    cout<<cost<<'\n';
}


int32_t main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
