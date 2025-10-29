#include <vector>
#include <iostream>
#include <cstdint>
using namespace std;
#define int long long
int32_t main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<int> v(n+1);
		for(int i=1;i<=n;i++){
			cin>>v[i];
		}
		int c=1;
		vector <int> ans(n+1, 0);
		ans[1]=c;
		for(int i=2;i<=n;i++){
			int d=v[i]-v[i-1];
			int p=i-d;
			if(p==0){
				c++;
				ans[i]=c;
			} else{
				ans[i]=ans[p];
			}
		}
//		cout<<c;
		for(int i=1;i<=n;i++){
			cout<<ans[i]<<' ';
		}
		cout<<'\n';
	}
	
}