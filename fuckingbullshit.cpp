#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
// void solve([[maybe_unused]] int test) {
//     int n;
//     scanf("%lld", &n);
//     char s[10] = {'c','o','d','e','f','o','r','c','e','s'};
//     string a;
//     //vector<string> suff;
//     for (int i = 0; i < n; i++) 
//     {
//         getline(cin,a);
//         if(a[i] == s[i])
//         {
//             cout<<"YES"<<"\n";
//         }
//         else
//         {
//             cout<<"NO"<<"\n";
//         }    
//     }
// }
 
int32_t main() {
    int t;
    cin >> t;
    char s[10] = {'c','o','d','e','f','o','r','c','e','s'};
    char a[t];
    bool flacko = true;
    for (int i = 0; i <t; i++) 
    {
        cin >> a[i];
        for(int j=0;j<10;j++)
        {    
            if(a[i] == s[j])
            {
                flacko = true;
                break;
            }
            else
            {
                flacko = false;
            }
        }
        if(flacko == true)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}