#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
   int n,x;
   cin>>n>>x;
   string s;
   cin>>s;
  int inf=1e9;
   int c=0;
   int c1 = -inf;
   int c2=inf;
   for(int i=0;i<n;i++){
        if(s[i]=='#'){
            c++;
        }
   }

   //cout<<c1<<c2;
   
   if(c==0||(x==1||x==n)){
    cout<<1<<'\n';
    return;
   }
   x--;
      for(int i=x-1;i>=0;i--){
    if(s[i]=='#'){
        c1=i;
        break;
        }
   }
   for(int i=x+1;i<n;i++){
    if(s[i]=='#'){
        c2=i;
        break;
    }
   }

   int m1 = min(x+1,n-c2+1);
   int m2 = min(n-x, c1+2);
   int ans = max(m1,m2);
   cout<<ans<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}