#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>
using namespace std;
#define int long long
int32_t main(){
	int n;
	cin>>n;
	vector <int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int d =0;
	sort(v.begin(), v.end());
	//if(n%2!=0){
		d=v[n/2];
	// } else{
	// 	d=v[(n/2)+1];
	// }
	//cout<<d;
	int sum = 0;
	for(int i=0;i<n;i++){
		sum +=abs(d-v[i]);
	}
	cout<<sum<<'\n';

}