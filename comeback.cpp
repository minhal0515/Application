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
        int k=0;
        if(b>a){
            k = b-a;
        }
        if(b-a+1>=n){
            k = n;
        }
        else if(a>=b){
            k = 0;
        }
        int r = abs(k-n);
        //cout<<k;
        int sum = 0;
        sum+= (k)*(2*b+(k-1)*-1)/2;
        sum+=r*a;
        cout<<sum<<'\n';
    }
}