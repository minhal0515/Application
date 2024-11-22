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
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }
    int count=1;
    vector <int> c;
    int ce=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            count++;
        }
        else{
            c.push_back(count);
            count = 1;
        }
    }
    int f = 0;
    c.push_back(count);
    for(int i=0;i<c.size();i++){
        if(c[i]==1 or c[i]%2!=0){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<'\n';
    }

    
    //cout<<co<<ce;
    
 
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}