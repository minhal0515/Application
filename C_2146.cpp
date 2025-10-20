#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int h=0;h<t;h++){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int c=0;
		if(s[0]=='0'){
			c++;#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int h=0;h<t;h++){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int c=0;
		if(s[0]=='0'){
			c++;
		}
		int f=0;

		for(int i=1;i<n;i++){
			if(s[i]=='0'){
				c++;
			}
			else{
				if(c==1){
				//	cout<<"NO"<<'\n';
					f=1;
					break;
				}
				c=0;
			}
		}
		if(c==1){
			f=1;
		}
//		cout<<f;
		if(f==1){
			cout<<"NO"<<'\n';
			continue;
		}
		vector <int> ans(n);
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				ans[i]=i+1;
			}
		}
		int p=0;
		int ff=0;
		vector <int> comp(n);
		for(int i=0;i<n;i++){
			if(ans[i]==0 &&ff==0){
				p=i;
				ff=1;
			} else if((ans[i]!=0 || i==n-1) &&ff==1){
				if(i==n-1 && ans[i]==0){
					comp[p]=i+1;
				} else{
					comp[p]=i;
				}
				ff=0;
			}
		}
		for(int i=0;i<n;i++){
			//cout<<i<<' ';
			if(comp[i]!=0){
				int uu=comp[i];
				int uuu=0;
				for(int k=0;k<uu-i;k++){
					ans[k+i]+=(uu-uuu);
					uuu++;
				}
				i+=uu-i;
			}
		}
		cout<<"YES"<<'\n';
		for(int i=0;i<comp.size();i++){
			
			cout<<ans[i]<<' ';
		}
		cout<<'\n';
	}
}
		}
		int f=0;

		for(int i=1;i<n;i++){
			if(s[i]=='0'){
				c++;
			}
			else{
				if(c==1){
				//	cout<<"NO"<<'\n';
					f=1;
					break;
				}
				c=0;
			}
		}
		if(c==1){
			f=1;
		}
//		cout<<f;
		if(f==1){
			cout<<"NO"<<'\n';
			continue;
		}
		vector <int> ans(n);
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				ans[i]=i+1;
			}
		}
		int p=0;
		int ff=0;
		vector <int> comp(n);
		for(int i=0;i<n;i++){
			if(ans[i]==0 &&ff==0){
				p=i;
				ff=1;
			} else if((ans[i]!=0 || i==n-1) &&ff==1){
				if(i==n-1 && ans[i]==0){
					comp[p]=i+1;
				} else{
					comp[p]=i;
				}
				ff=0;
			}
		}
		for(int i=0;i<n;i++){
			//cout<<i<<' ';
			if(comp[i]!=0){
				int uu=comp[i];
				int uuu=0;
				for(int k=0;k<uu-i;k++){
					ans[k+i]+=(uu-uuu);
					uuu++;
				}
				i+=uu-i;
			}
		}
		cout<<"YES"<<'\n';
		for(int i=0;i<comp.size();i++){
			
			cout<<ans[i]<<' ';
		}
		cout<<'\n';
	}
}