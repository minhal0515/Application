#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
//    int x,y;
//    cin>>x>>y;
//    if(x==y){
//         if(x==1){
//             cout<<1<<'\n';
//             return;
//         }
//         else{
//             int a = x*x;
//             cout<<a-x+1<<'\n';
//             return;
//         }
//    }
//    else if(x<y){
//         if(y%2==0){
//             int n=(y-1)*(y-1) +1;
//             int a = n+x-1;
//             cout<<a<<'\n';
//             return;
//         }
//         else{
//             int n=y*y;
//             int a=n-x+1;
//             cout<<a<<'\n';
//             return;
//         }
//    }
//    else{
//         if(x%2==0){
//             int n=x*x;
//             int a=n-y+1;
//             cout<<a<<'\n';
//             return;
//         }
//         else{
//             int n=(x-1)*(x-1)+1;
//             int a=n+y-1;
//             cout<<a<<'\n';
//             return;
//         }
//    }
// }
 
int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n,m,k;
        cin>>n>>m>>k;
        vector <int> v1(n);
        vector <int> v2(m);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int p1 = 0;
        int p2 = 0;
        int x =0;
        if(n>=m){
            x=n;
        }else{
            x=m;
        }
        int count = 0;
        while(p1<n && p2<m){
            if(abs(v1[p1]-v2[p2])<=k){
                count++;
                p1++;
                p2++;
            } else if(v1[p1]-v2[p2]<k){
                p1++;
            } else if(v1[p1]-v2[p2]>k){
                p2++;
            }
        }
        cout<<count;
    }
}