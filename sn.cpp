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
        long long s,k,m;
        cin>>s>>k>>m;
        int f = 0;
        if(s>k){
            if(m/k%2!=0){
                s=k;
            }
        }
        long long x = m/k;
        if(m>=(x*k+s)){
            cout<<0<<'\n';
        } else{
            cout<<(x*k+s)-m<<'\n';
        }

    }
}