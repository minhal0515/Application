#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
    vector <int> a;
    vector <int> b;
    for(int i=0;i<n;i++){
    	int x,y;
    	cin>>x>>y;
    	a.push_back(x);
    	b.push_back(y);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
// for(int i=0;i<n;i++){
// 	cout<<a[i]<<' '<<b[i]<<' ';
// }
    int count=0;
    int m=0;
    int p1=0;
    int p2=0;
   	while(p1<n && p2<n){
//   		cout<<count<<' ';
   		if(a[p1]<b[p2]){
   			p1++;
   			count++;
   			m=max(count,m);
   		} else{
   			//cout<<a[p1]<<' '<<b[p2];
   			p2++;
   			count--;
   		}
   	}
    cout<<m<<'\n';
}