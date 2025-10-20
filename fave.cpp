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
        int max = n;
        int min = 1;
        int count = n;
        int it = 1;
        while(count>0){
            if(it%k==0){
                cout<<min<<' ';
                min++;
            }
            else{
                cout<<max<<' ';
                max--;
            }
            count--;
            it++;
        }
        cout<<'\n';
    }
}