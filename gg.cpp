#include <vector>
#include <algorithm>
#include <cstdint>
#include <iostream>
using namespace std;
int32_t main(){
	int n;
	cin>>n;
	vector <int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int x=1;
	int sum=0;
	for(int i=0;i<n;i++){
		if(v[i]==x){
			x++;
			sum+=x;
		} else{
			sum+=v[i];
			break;
		}
	}
	cout<<sum<<'\n';

}