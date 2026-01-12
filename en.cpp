#include "bits/stdc++.h"
#include <iostream>
#include <set>
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {

// }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n,k;
        cin>>n>>k;
        if(n==k){
            cout<<0<<'\n';
            continue;
        }
        int f = 0;
        int count=0;
        while(n>1){
            int b=0;  
            if(n%2!=0){
                b=n/2;
                n=n-b;
                if(n==k||b==k){
                    f=1;
                    count++;
                    break;
                }
                if(n%2==0){
                    n=b;
                }
               // cout<<n<<' '<<b<<"odd"<<'\n';
                //cout<<n<<' '<<b<<' ';
            } else{
                n=n/2;
                if(n==k){
                    f=1;

                    count++;

                    break;
                }
                    //cout<<n<<' '<<n<<"even"<<'\n';
            }

            count++;

        }
        if(f==1){
            cout<<count<<'\n';
        } else{
            cout<<-1<<'\n';
        }


    }
}