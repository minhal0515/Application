#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif

using namespace std;
using ll = long long;
#define int long long

// int gcd(int a, int b){
//     if(b==0){
//         return a;
//     }
//     return gcd(b, a%b);
// }

int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin >> n;

        for(int i=1;i<=n;i++){
        int no = 0;
        int nos = 0;
        int score = 0;
            if(i==1){
                cout<<0<<'\n';
            }
            else if(i==2){
                cout<<6<<'\n';
            }
            else{
                for(int j=1;j<=i;j++){
                    if(j<i-1){
                        no++;
                    }
                    if(j>2){
                        no++;
                    }
                    nos+=2;
                }
                nos-=2;
                for(int j=1;j<=i-1;j++){
                    if(j<=i-2){
                        score+=no;
                        score+=nos;
                    }
                    else{
                        score+=no;
                    }
                }
                int total = 0;
                int c=(i*i)-1;
                total = (c*(c+1))/2;
                int ans = total - score;
                cout<<ans<<'\n';
            }
        }
    }
}