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
    char s;
    cin>>n;

    vector <char> v;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    if(n<3){
        cout<<0<<'\n';
        return;
    }
    int count = 0;
    for(int i=0;i<v.size()-2;i++){
        if(v[i]=='m' and v[i+1]=='a' and v[i+2]=='p'){
            count+=1;
            if(v[i+3]=='i'){
                i=i+3;
            }
        }
        if(v[i]=='p' and v[i+1]=='i' and v[i+2]=='e'){
            count+=1;
        }
    }
    cout<<count<<'\n';
}
    
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}