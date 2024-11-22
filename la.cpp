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
    char a;
    int count1 = 0;
    int count2 = 0;
    vector <int> c1;
    vector <int> c2;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a=='1'){
            count1++;
        }
        c1.push_back(count1);
        if(a=='0'){
            count2++;
        }
        c2.push_back(count2);
    }
    int f = c1[n-1];
    if(f == 0){
        cout<<n<<'\n';
        return;
    }
    int ans = 0;
    int ce = 0;
    int co = -1;
    int n1 = n/2;
    int cf = 0;
    int val = 0;
        
    if(n%2!=0){
        for(int i=0;i<n;i++){
            int j = 0;
            if(abs(i-2)%2==0 and n1>ce){
            //cout<<ce;
                ce++;
                j = n1-ce;
        }
            else{
            //cout<<co;
                co++;
                j = n1+co;
            }
            val++;
            //cout<<j<<'\n';
            if(c1[j]<=c2[j] and 2*(f-c1[j])>=n-(j+1)){
                ans = j+1;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            int j = 0;
            if(i==0){
                j = n/2-1;
            }
            else if (i==n-1){
                j = n-1;
            }
            else if(abs(i-2)%2==0 and n1>ce){
                j = n1+cf;
                cf++;

            }
            else{
                ce++;
                j = n1-ce-1;  
            }
            val++;
 
            if(c1[j]<=c2[j] and 2*(f-c1[j])>=n-(j+1)){
                ans = j+1;
                break;
            }
            
        }
    }
    //cout<<f<<' '<<n/2;
    if(val==n and f>=n/2+n%2){
        cout<<0<<'\n';
    }
    // else if(2*(f-c1[ans-1])<(n-ans)){
    //         cout<<n<<'\n';
    // }
    else{
        cout<<ans<<'\n';
    }
    
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}