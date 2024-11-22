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
    int x1;
    int x2;
    vector <int> a;
    vector <int> b;
    for(int i=0;i<n;i++){
        cin>>x1;
        a.push_back(x1);
    }
    for(int i=0;i<n;i++){
        cin>>x2;
        b.push_back(x2);
    }
    int x=0;
    int y=0;
    int ne = 0;
    int p = 0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            x+=a[i];
        }
        else if(b[i]>a[i]){
            y+=b[i];
        }
        else if(a[i]==1){
            p+=a[i];
        }
        else if(a[i]==-1){
            ne++;
        }
        //cout<<x<<y<<ne<<p<<'\n';
    }
    while(p>0){
        if(x<y)
            x++;
        else
            y++;
        p--;
    }
    while(ne>0){
        if(x>y)
            x--;
        else
            y--;
        ne--;
    }
    cout<<min(x,y)<<'\n';
}
    
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}