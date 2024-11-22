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
        string x;
        cin>>x;
        int f=0;
        if(x.size()<3){
            cout<<"NO"<<'\n';
            continue;
        }
        if(x.size()==3 and x[2]=='1' and x[1]=='0'){
            cout<<"NO"<<'\n';
            continue;
        }
        if(x[0]=='1' and x[2]!='0' and x[1]=='0'){
                f=1;
            }
        if(f==1){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}