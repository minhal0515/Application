#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <cstdint>
#include <cmath>
using namespace std;
#define int long long
void hanoi(int n, char f, char a, char t){
	if(n==0){
		return;
	}
	hanoi(n-1, f,t,a);
	//count++;
	cout<<f<<' '<<t<<'\n';
	hanoi(n-1, a,f,t);
}


int32_t main(){
	int n;
	cin>>n;
//	int ans=0;
	cout<<pow(2,n)-1<<'\n';
	hanoi(n,'1','2','3');
}