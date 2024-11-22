#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        int i = 1;
        vector <int> v(n);
        v[0] = a;
        int f = 0;
        int t1 = n;
        while(i<n/2){
            if(t1!=b){
                v[i]=t1;
                i++;            
            }
            if(t1==a){
                f=1;
            }
            t1--;
        }
        int j = (n/2)+1;
        v[n/2] = b;
        int t2 = 1;
        while(j<n){
            if(t2!=a){
                v[j]=t2;
                j++;
            }
            if(t2==b){
                f=1;
            }
            t2++;
        }
        if(f==1){
            cout<<-1<<'\n';
        }
        else{
            for(int x=0;x<n;x++){
                cout<<v[x]<<' ';
            }
            cout<<'\n';
        }
    }
}
