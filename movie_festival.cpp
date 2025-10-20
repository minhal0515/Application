#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	vector<int> v(n);
	vector<int> u(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		u[i]=v[i];
	}

	sort(v.begin(), v.end());
	int p1=0;
	int p2=n-1;
	int sum=0;
	int f=0;
	int a1=0;
	int a2=0;
	while(p2>p1){
		sum=v[p1]+v[p2];
		if(sum==x){
			a1=v[p1];
			a2=v[p2];
			f=1;
			break;
		} else if(sum>x){
			p2--;
		} else if(sum<x){
			p1++;
		}
	}
	int a,b;
	int ff=0;
	for(int i=0;i<n;i++){
		if(u[i]==a1 && ff==0){
			a=i+1;
			ff=1;
		} else if(u[i]==a2){
			b=i+1;
		}
	}
	if(f==0){
		cout<<"IMPOSSIBLE"<<'\n';
	} else{
		cout<<a<<' '<<b<<'\n';
	}
}