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
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='Y'){
                c++;
            }
        }
        if(c>=2){
            cout<<"NO"<<'\n';
        } else{
            cout<<"YES"<<'\n';
        }
    }
}