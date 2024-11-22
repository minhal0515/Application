#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    int x;
    vector <int> a;
    for(int i =0 ;i<n;i++){
        cin>>x;
        a.push_back(x);
    }

    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;

        int f = 0;
        if(s.size()!=n){
            cout<<"NO"<<'\n';
            continue;
        }
        map<int,char> freq1;
        map<char,int> freq2;
        for(int j=0;j<n;j++){
            if(freq1.find(a[j])==freq1.end()){
                freq1[a[j]]=s[j];
            }
            if(freq2.find(s[j])==freq2.end()){
                freq2[s[j]]=a[j];
            }
            if((freq1[a[j]]!=s[j]) or (freq2[s[j]]!=a[j])){
                f=1;
                break;
            }  

            }
        if(f==1){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
    }
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}