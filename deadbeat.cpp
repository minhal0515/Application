#include <bits/stdc++.h>
using namespace std;
#define int long long
bool pal_check(const string &s){
	int n=s.size();
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-i-1]){
			return false;
		}
	}
	return true;
}
int32_t main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		string s;
		while(n>0){
			if(n&1){
				s+='1';
			} else{
				s+='0';
			}
			n>>=1;
		}
		//reverse(s.begin(), s.end());
		//cout<<s;
		bool ans=false;
		int u=s.size();
		for(int j=0;j<31;j++){
			if(pal_check(s)){	
				if(s.size()%2!=0){
					if(s[s.size()/2]!='1'){
						ans=true;
						break;
					}
				} else{
					ans=true;
					break;
				}
			}
			s+='0';
			//cout<<s<<' ';
		}
		if(ans==true){
			cout<<"YES"<<'\n';
		} else{
			cout<<"NO"<<'\n';
		}
	}
	
}