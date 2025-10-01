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
		vector <int> v(2*n);
		for(int i=0;i<2*n;i++){
			cin>>v[i];
		}
		if(n==1){
			cout<<v[1]-v[0]<<'\n';
			continue;
		}
		vector <int> ans(n);
		int even_sum = 0;
		//int odd_sum = 0;
		int even_p = 1;
		int odd_p = 2;
		for(int i=0;i<2*n;i++){
			if(i%2==0){
				even_sum-=v[i];
			} else{
				even_sum+=v[i];
			}
		}
		ans[0]=even_sum;
		int odd_sum = v[2*n-1]-v[0];
		for(int i=1;i<2*n-1;i++){
			if(i%2!=0){
				odd_sum-=v[i];
			} else{
				odd_sum+=v[i];
			}	
		}
		ans[1]=odd_sum;
//		cout<<2*v[2*n-even_p]<<"HAHA";
		for(int i=2;i<n;i++){
			if(i%2==0){
				even_sum-=2*v[even_p];
				even_sum+=2*v[2*n-even_p-1];
				even_p+=2;
				ans[i]=even_sum;
			} else{
				odd_sum-=2*v[odd_p];
				odd_sum+=2*v[2*n-odd_p-1];
				odd_p+=2;
				ans[i]=odd_sum;
			}
		}
		for(int i=0;i<n;i++){
			cout<<ans[i]<<' ';
		}
		cout<<'\n';

	}
}