#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

int32_t main(){
	vector <int> v = {1,2,3,4,5,6};
	int temp;
	for(int i=0;i<v.size()-1;i++){
		if(i%2==0){
			temp = v[i];
			v[i]=v[i+1];
			v[i+1] = temp;
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
}