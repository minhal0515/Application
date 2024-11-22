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
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int count =0;
        if((a1>b1 and a2>=b2) or (a1==b1 and a2>b2)){
            count++;
        }
        if((a1>b2 and a2>=b1) or (a1==b2 and a2>b2)){
            count++;
        }
        if((a2>b1 and a1>=b2) or (a2==b1 and a1>b2)){
            count++;
        }
        if((a2>b2 and a1>=b1) or (a2==b2 and a1>b1)){
            count++;
        }
        cout<<count<<'\n';
    }
}