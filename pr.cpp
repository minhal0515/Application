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
    for(int i=0;i<n-1;i++){
        if(c==0 || c1 == 0){
            f=1;
        }
        if(s[i]=='1'){
            c--;
        }
        else{
            c1--;
        }
    }
    if(f==0){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}