#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
//     //int n;
//     int a;
//     int b;
//     int s;
//     //scanf("%lld",&n);
//     cin >>a>>b>>s;
//     if(a+b==s)
//     {
//         cout<<'+';
//     }
//     else
//     {
//         cout<<'-';
//     }
// }
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        //int n;
    int a;
    int b;
    int s;
    //scanf("%lld",&n);
    cin >>a>>b>>s;
    if(a+b==s)
    {
        cout<<'+'<<'\n';
    }
    else
    {
        cout<<'-'<<'\n';
    }
    }
}