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
    cin>>n;
    char y;
    vector <char> s;
    for(int i=0;i<n;i++){
        cin>>y;
        s.push_back(y);
    }
    
    char a;
    int x = s.size();
    if(s[0]!=s[x-1]){
        cout<<"YES"<<'\n';
        return;
    }
    cout<<"No"<<'\n';


}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}