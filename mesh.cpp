#include <bits/stdc++.h>
using namespace std;
#define int long long

int expo(int b, int e, int m){
	int res=1;
	b%=m;
	while(e>0){
		if(e&1){
			res=(res*b)%m;

		}
		b=(b*b)%m;
		e>>=1;
	}	
	return res;
}

int32_t main(){
	int t;
	cin>>t;
	int n=1000000007;
	for(int i=0;i<t;i++){
		int a,b;
		cin>>a>>b;
		int ans = expo(a,b,n);
		//ans=ans%n;
		cout<<ans<<'\n';
		
	}
}