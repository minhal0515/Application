#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
   int k,x;
   cin>>k>>x;
   int n;
   n = 1ll<<k;
   if(x==0 || x==n*2){
   	cout<<-1<<'\n';

   }
   int y = n*2-x;
   vector <int> ans;
   ans.clear();
   //cout<<n<<y;
   while(x!=n){
   	if(x>y){
   		ans.push_back(2);
   		x-=y;
   		y*=2;
   	}else{
   		ans.push_back(1);
   		y-=x;
   		x*=2;
   	}
   }
   	cout<<ans.size()<<'\n';
   	if(ans.size()==0){
   		cout<<'\n';
   		return;
   	}
   	if(ans.size()==1){
   		cout<<ans[0]<<'\n';
   		return;
   	}
   	for(int i=ans.size()-1;i>=0;i--){
   		cout<<ans[i]<<' ';
   	}
   	cout<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}