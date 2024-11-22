#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m;
    cin>>n;
    vector <char> v;
    vector <char> s(5);
    s[0]='a';
    s[1]='e';
    s[2]='i';
    s[3]='o';
    s[4]='u';
    if(n<=5){
        for(int i=0;i<n;i++){
            v.push_back(s[i]);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<'\n';
        return;
    }
    vector <int> a(5);
    int z = n;
    int u = 4;    
    while(z>0){
    
        a[u]++;
        u--;
        if(u==-1){
            u=4;
        }
        z--;
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<a[i];j++){
            v.push_back(s[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}