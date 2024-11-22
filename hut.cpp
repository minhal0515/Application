#include "bits/stdc++.h"
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#define ll long long
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,m,q;
    cin>>n>>m>>q;
    vector <int> a(n);
    vector <int> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    map<int, int> mp;
    int c = 0;
    int j = 0;
    int f = 0;
    int val = 0;
    int count = 0;
    while(true){
        //cout<<"BB";
        if(c==n or j==m){
            break;
        }
        else if(b[j]==a[c]){
            mp[b[j]]++;
            c++;
            j++;
        }
        else{
            if(mp[b[j]]>0){
                j++;
            }
            else{
                f=1;
                break;
            }
        }
    }
    if(f==0){
        cout<<"YA"<<'\n';
    }
    else{
        cout<<"TIDAK"<<'\n';
    }
}
 
int32_t main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}