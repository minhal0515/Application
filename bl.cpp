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
    int x;
    vector <int> q(n);
    vector <int> v;
    for(int i =0 ;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int y=v[0];
    q[y-1]=1;
    int f=0;
    for(int i=1;i<v.size();i++){
        int j=v[i];
        if(v[i]==1){
            if(q[1]!=1){
                f=1;
                break;
            }
            else{
                q[0]=1;
            }
        }
        else if(v[i]==n){
            if(q[n-2]!=1){
                f=1;
                break;
            }
            else{
                q[n-1]=1;
            }
        }
        else{
            if(q[j]==0 and q[j-2]==0){
                f=1;
                break;
            }
            else{
                q[j-1]=1;
            }
        }
    }
    
    // for(int i=0;i<q.size();i++){
    //     cout<<q[i];
    // }
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