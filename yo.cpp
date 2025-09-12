using namespace std;
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
	int n,x;
	cin>>n>>x;
	vector <int> p(n);
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p.begin(), p.end());
	int p1=0;
	int p2=n-1;
	int count=0;
	// for(int i=0;i<n;i++){
	// 	cout<<p[i]<<' ';
	// }
	// cout<<'\n';
	while(p1<=p2){
		if(p1==p2){
		//	cout<<p1<<p2;
			count++;
			break;
		}
		if(p[p1]+p[p2]>x){
			//cout<<p1<<' '<<p2<<' ';
			p2--;
			count++;
		} else{
			p2--;
			p1++;
			count++;
		}

	}
	//count++;
	cout<<count<<'\n';
	//return count;
}