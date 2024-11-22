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
        int n,k;
        cin>>n>>k;
        int a = n;
        if(n==1){
            a=0;
        }
        int count = 0;
        while(a>1){
            a = a-k+1;
            count++;
            //cout<<a;
        }
        cout<<count<<'\n';
    }
}