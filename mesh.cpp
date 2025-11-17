#include <bits/stdc++.h>
using namespace std;
#define int long long



int32_t main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector <int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int sum = max(v[0],v[n-1]);
		int m = v[0];
		for(int i=0;i<n-1;i++){
			sum+=max(v[i],v[i+1]);
			if(v[i+1]>m){
				m=v[i+1];
			}
		}
		sum-=m;
		cout<<sum<<'\n';
	}
}