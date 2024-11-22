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
        int tot = n+n-1;
        int count = 0;
        int i = 0;
        while(k>0){
            if(abs(2-i)%2==0){
                k-=n;
                n--;
            }
            else if(abs(2-i)%2!=0 or i==1){
                //cout<<n;
                k-=n;
            }
            //cout<<k<<' ';
            count++;
            i++;
        }
        cout<<count<<'\n';
    }
}