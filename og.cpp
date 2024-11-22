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
    cin>>n>>m>>k;
    
    char b;
    char sl;
    vector <char> v;
    for(int j=0;j<n;j++){
        cin>>b;
        v.push_back(b);
    }
 
    if(m>n){
        cout<<"YES"<<'\n';
        return;
    }
    int mc = 0;
    int kc = k;
    //int i=0;
    int flacko = 0;
    int max = m-1;
    for(int i=0;i<n;i++){
        if(v[i]=='L'){
            max = i+m;
            //cout<<max<<'\n';
        }
        if(v[i]=='W' and i>=max){
            k--;
        }
        if(v[i]=='C'){
            if(i>=max){   
                mc = 1;
                break;
            }
        }
        if(k<0){
            mc=1;
            break;
        }
    }

    
    if(mc==0){
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