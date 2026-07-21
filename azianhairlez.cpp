#include <vector>
#include <iostream>
#include <cstdint>
using namespace std;
#define int long long


int xorf(const vector <int>& v){
	int val=v[0];
	for(int i=1;i<v.size();i++){
		val^=v[i];
	}
	return val;
}

int32_t main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector <int> a(n);
		vector <int> b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		int a1=xorf(a);
		int b1=xorf(b);
		if(a1==b1){
			cout<<"Tie"<<'\n';
			continue;
		}
		string adv;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				if(i%2==0){
					adv="Ajisai";
				} else{
					adv="Mai";
				}
			}
		}
		cout<<adv<<'\n';
		
	}
	
}