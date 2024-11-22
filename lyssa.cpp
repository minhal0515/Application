#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m,k;
    cin>>n;
    char x;
    vector <char> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    if(v[0]=='1' and v[v.size()-1]=='1'){
        cout<<"YES"<<'\n';
        return;
    }
    int c1 = 0;
    int c2 = 0;
    int count = 0;
    for(int i = 0;i<n;i++){
        if(v[i]=='0'){
            c2++;
        }
        else{
            c2=0;
            count++;
        }
        if(c2==1){
            c1++;
        }
    }
    if(count>c1){
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
