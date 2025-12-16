#include <vector>
#include <algorithm>
#include <cstdint>
#include <iostream>
using namespace std;
#define lvl long long int 

lvl solve(int i1, lvl* arr, lvl sum1, lvl sum2, lvl n){
	if(i1==n){
		return abs(sum1-sum2);
	}
	lvl c=solve(i1+1,arr,sum1+arr[i1], sum2, n);
	lvl nc=solve(i1+1, arr, sum1, sum2+arr[i1],n);
	return min(c,nc);
}
int main(){
	int n;
	cin>>n;
	lvl arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	lvl ans=solve(0,arr,0,0,n);
	cout<<ans<<'\n';
}