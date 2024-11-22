#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,k;
    cin>>n;
    string v;
    string s;
    cin>>v;
    cin>>s;
    int c1 = 0;
    int c = 0;
    int f = 0;
    for(int i=0;i<n;i++){
        if(v[i]=='0'){
            c++;
        }else{
            c1++;
        }
    }
    if(c==0 || c1 == 0){
        f=1;
    }
    int x = n-3;
    for(int i=0;i<n-2;i++){
        if(v[i]!=s[x]){
            x--;
            continue;
        }
        else{
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}