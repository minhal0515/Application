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
    int x = 1000;
    int sum = 0;
    for(int i=0;i<1000;i++){
        sum+=x;
        x--;
    }
    cout<<sum;
}