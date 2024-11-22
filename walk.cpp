#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n;
    int x;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }

    int fl = 1;
    int count = 0;

    for(int i=1;i<v.size()-1;i++){
        //cout<<abs(v[i]-v[i+1])<<' '<<fl; 
        //cout<<count<<' ';
        v[i] = v[i] - v[i-1]*2;
        v[i+1] = v[i+1] - v[i-1]*1;
        v[i-1] = v[i-1] - v[i-1]*1;
        //cout<<v[i-1]<<v[i]<<v[i+1]<<'\n';

        if(v[i]<0){
            break;
        }
    }
    int a = 1;
    for(int i=0;i<v.size();i++){
        //cout<<v[i]<<' ';
        if(v[i]!=0){
            a = 0;
            break;
        }
    }
    if(a==1){
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