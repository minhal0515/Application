#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		vector <int> v(n);
		vector<int> mp(n+1);
		vector <int> p(n+1);
		for(int i=0;i<n;i++){
			cin>>v[i];
			mp[v[i]]++;
		}
		for(int i=1;i<=n;i++){
			p[i]=p[i-1]+mp[i];
		}
		int ans=1;
		for(int g=1;g<=n;g++){
			int t=min(n,4*g-1);
			int gg=n-p[t];
			if(g<=n){
				gg+=mp[g];
			}
			if(2*g<=n){
				gg+=mp[2*g];
			}
			if(3*g<=n){
				gg+=mp[3*g];
			}
			if(gg>=n-k){
				ans=g;
			}
		}
		cout<<ans<<'\n';
	}



}