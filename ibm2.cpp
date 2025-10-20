// using namespace std;
// #include <vector>
// #include <iostream>
// #include <algorithm>

// int main(){
	
// //	cout<<count<<'\n';
	
// }
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
	vector <pair<int,int>>v(n);
	for(int i=0;i<n;i++){
		int a,b;	
		cin>>a>>b;
		v[i]={a,b};
	}
	sort(v.begin(),v.end());
	for(auto &p:v){
		
	}
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}