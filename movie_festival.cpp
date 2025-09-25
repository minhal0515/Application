#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<pair<int, int>> m;
	//int a,b;
	m.resize(n);	
	for(int i=0;i<n;i++){
		cin>>m[i].first;
//		cin.ignore();
		cin>>m[i].second;
	}
	sort(m.begin(), m.end(), [](const pair<int, int>& p1, const pair<int, int>&p2){
		return p2.second>p1.second;
	});
	int count=0;
	int u=0;
	for(auto p:m){
//		cout<<p.first<<' '<<p.second<<' ';
		if(count==0){
			count++;
			u=p.second;
		} else{
			if(p.first>=u){
				u=p.second;
				count++;
			}
		}
	}
	cout<<count<<'\n';
}