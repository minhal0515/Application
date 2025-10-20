#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int p1=0;
		int p2=n-1;
		int c1=0;
		int c2=0;
		int c3=0;
		for(int i=0;i<n;i++){
			if(s[i]=='0'){
				c1++;
			} else if(s[i]=='1'){
				c2++;
			} else if(s[i]=='2'){
				c3++;
			}
		}
//		cout<<c1<<c2<<c3;
		string ans(n, ' ');
		for(int i=0;i<c1;i++){
			ans[i]='-';
			p1++;
		}
		for(int i=0;i<c2;i++){
			ans[p2]='-';
//			cout<<p2;
			p2--;
		}
		for(int i=0;i<c3;i++){
			ans[p1]='?';
			p1++;
			ans[p2]='?';
			p2--;
		}
		for(int i=0;i<n;i++){
			if(s[i]!='-' && s[i]!='?'){
				s[i]='+';
			}
		}
		cout<<ans<<'\n';

	}
}