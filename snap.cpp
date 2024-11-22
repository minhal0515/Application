#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#define all(x) (x).begin(), (x).end()
#endif
 
using namespace std;
typedef long long ll;
 
void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    int sr = sqrt(n);
    vector <char> v;
    char x;
    int f = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    if(sr*sr!=n){
        cout<<"NO"<<'\n';
        return;
    }
    for(int i=0;i<n;i++){
        if(((i<sr)or(i>=n-sr)) or (i%sr==0) or (i%sr==sr-1)){
            if(v[i]!='1'){
                f=1;
                break;
            }
        }
        else{
            if(v[i]!='0'){
                f=1;
                break;
            }
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