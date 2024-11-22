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
    int a;
    int b;
    vector <int> x;
    vector <int> y;
    vector <int> yz;
    vector <int> yo;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        x.push_back(a);
        y.push_back(b);
        if(b==0){
            yz.push_back(a);
        }
        else{
            yo.push_back(a);
        }
    }
    for(int i=0;i<yo.size();i++){
        cout<<yo[i];
    }


}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}