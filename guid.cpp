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
        if(k==1 or k%2!=0){
            cout<<"NO"<<'\n';
        }
        int p=0;
        int c = n;
        for(int i = 0;i<n/2;i++){
            p+=abs(c-i);
            c--;
        }
        if(k==0){
            cout<<"YES"<<'\n';
        }
        if(p>2*k){
            cout<<"NO"<<'\n';
        }
        
    }
}