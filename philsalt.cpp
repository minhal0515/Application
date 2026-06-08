#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long

 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin>>n;
        int a,b;
        int f=0;
        for(int i=0;i<=22;i++){
            if(i==10||i==12||i==13||i==14||i==15||i==16||i==17||i==18||i==19||i==20||i==21){
                continue;
            }
            if(((n%12)==(i%12))&&((n-i)%12==0)&&(n-i)>=0){
                
                    a=i;
                    b=n-a;
                    f=1;
                    break;
                    
            }
        }
        if(f==0){
            cout<<-1<<'\n';
            continue;
        }
        cout<<a<<' '<<b<<'\n';
    }
}