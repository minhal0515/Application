#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif

using namespace std;
using ll = long long;
#define int long long
 
const int ma = 2e5+5; 
int v[ma], suf[ma], mins[ma];
int n,k,m;


bool prefix(){
    suf[n-1]=mins[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]+v[i];
        mins[i]=min(mins[i+1],suf[i]);
    }
    ll s = 0;
    for(int i=0;i<=n-3;i++){
        s+=v[i];
        if(s<0){
            continue;
        }
    
        if(suf[i+1]>=mins[i+2]){
            return true;
        }
    }
    return false;

}

void solve([[maybe_unused]] int test) {
    cin>>n>>k;
    //vector <int> v;
    for(int i=0;i<n;i++){
        cin>>m;
        v[i]=m;
    }
    for(int i=0;i<n;i++){
        if(v[i]<=k){
            v[i]=1;
        }else{
            v[i]=-1;
        }
    }
    int c = 0;
    int a = n-1;
    int b = -1;
    for(int i=0;i<n;i++){

        c+=v[i];
        if(c>=0){
            a=i;
            break;
        }
    }
    c=0;
    for(int i=n-1;i>=0;i--){
        c+=v[i];
        if(c>=0){
            b=i;
            break;
        }
    }
    if(a+1<b){
        cout<<"YES"<<'\n';
        return;
    }
    if(prefix()){
        cout<<"YES"<<'\n';
        return;
    }
    for(int i=0;i<n/2;i++){
        swap(v[i],v[n-i-1]);
    }
    if(prefix()){
        cout<<"YES"<<'\n';
        return;
    }
    cout<<"NO"<<'\n';
    return;
    
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}