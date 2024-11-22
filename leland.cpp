#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#define all(x) (x).begin(), (x).end()
#endif
 
using namespace std;
#define int long long
 
void solve([[maybe_unused]] int test) {
    int n;
    cin>>n;
    char x;
    vector <char> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    map<char,int> fr;
    for(char ch:v){
        fr[ch]++;
    }
    vector<pair<int,char>>vec;
    for(auto it:fr){
        vec.push_back({it.second,it.first});
    }
    sort(all(vec));
    reverse(all(vec));
    string ans;
    int sum = 0;
    string t;
    for(auto it:vec){
        t.push_back(it.second);
    }
    int i = vec.size()-1;
    while(i>=0){
        int r = vec[i].first-sum;
        for(int j=0;j<r;j++){
            ans+=t;
        }
        sum+=r;
        t.pop_back();
        i--;
    }
    cout<<ans[i]<<'\n';



}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}