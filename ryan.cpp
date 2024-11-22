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
        int n,a,b;
        cin>>n>>a>>b;
        int count=0;
        if(n%2==0 and (b<2*a))
        {
            count+=(n/2)*b;
        }
        else if(n%2==0 and (b>2*a))
        {
            count+=n*a;
        }
        else if(n%2!=0 and (b<2*a))
        {
            count+=(n/2)*b + a;
        }
        else 
        {
            count+=n*a;
        }
        cout<<count<<'\n';
    }
}