#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
   int x,y;
   cin>>x>>y;
   if(x==y){
        if(x==1){
            cout<<1<<'\n';
            return;
        }
        else{
            int a = x*x;
            cout<<a-x+1<<'\n';
            return;
        }
   }
   else if(x<y){
        if(y%2==0){
            int n=(y-1)*(y-1) +1;
            int a = n+x-1;
            cout<<a<<'\n';
            return;
        }
        else{
            int n=y*y;
            int a=n-x+1;
            cout<<a<<'\n';
            return;
        }
   }
   else{
        if(x%2==0){
            int n=x*x;
            int a=n-y+1;
            cout<<a<<'\n';
            return;
        }
        else{
            int n=(x-1)*(x-1)+1;
            int a=n+y-1;
            cout<<a<<'\n';
            return;
        }
   }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}