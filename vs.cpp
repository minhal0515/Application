#include <vector>
#include <iostream>
#include <cstdint>
using namespace std;
#define int long long
int32_t main(){
	//int t;
	//cin>>t;
	//for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector <int> d(1000005);
		for(int i=1;i<1000005;i++){
			for(int j=i;j<1000005;j+=i){
				d[j]++;
			}
		}
		//vector <int> v(n);
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			cout<<d[x]<<'\n';
		}
	}
