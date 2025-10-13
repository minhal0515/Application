#include <vector>
#include <iostream>
#include <cstdint>
using namespace std;
#define int long long
int32_t main(){
	int n;
	cin>>n;
	vector<int> v(n);
	//for(int i=0;i<n;i++){
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		vector <int> v1(n);
		for(int i=0;i<n;i++){
			v1[v[i]-1]=i+1;
		}
		// for(int i=0;i<n;i++){
		// 	cout<<v1[i];
		// }
		int ans=1;
		for(int i=0;i<n-1;i++){
			if(v1[i]>v1[i+1]){
				ans++;
			}
		}
		cout<<ans<<'\n';
	
}