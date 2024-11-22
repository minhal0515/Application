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
    int sum = 0;
    for(int i =0 ;i<n;i++){
        cin>>x;
        a.push_back(x);
        sum+=x;
    }

    string s;
    cin>>s;
    int p1=0;
    int p2=s.size()-1;
    int ans = 0;
    while(p1<p2){
        if(s[p1]=='R'){
            sum-=a[p1];
            p1++;
        }
        else if(s[p2]=='L'){
            sum-=a[p2];
            p2--;
        }
        else{
            ans+=sum;
            sum-=a[p1];
            sum-=a[p2];
            p1++;
            p2--;
        }

    }
    cout<<ans<<'\n';
}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}