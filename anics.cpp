#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n,k;
    cin>>n>>k;
    int x;

    vector <int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    if(n==1){
        cout<<1<<'\n';
        return;
    }

    map <int,int> fr;
    for(int num:v){
        fr[num]++;
    }
    int sum = 0;
    int count = 0;
    vector<pair<int,int>> f(fr.begin(), fr.end());
    sort(f.begin(), f.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
        return a.second<b.second;
    });
    for(const auto &pair: f){
        sum+=pair.second;        
        if(sum>k){
            sum-=pair.second;
            continue;
        }
        else{
            count++;
        }
    }
    int ans = 0;
    ans = fr.size()-count;
    if(ans==0){
        ans++;
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