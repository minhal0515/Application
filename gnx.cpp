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
        int n;
        cin>>n;

        int f = 0;
        int count = 1;
        if(n<=2){
            cout<<n<<'\n';
            continue;
        }
        int ans = 1;
        while(ans<n){
            //cout<<ans<<' ';
            ans+=1;
            count++;
            ans=ans*2;
        }
        cout<<count<<'\n';
    }
}