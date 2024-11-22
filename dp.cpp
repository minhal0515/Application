#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;
const int MOD = 1000000007;
int main() {
    int t;
    cin >> t;
    int x;
    vector<int> p(t);
    for(int i=0;i<t;i++){
        cin>>x;
    }
    for(int i=0;i<t;i++){
        cin>>p[i];
    }
    vector<int> ans(1 + *max_element(p.begin(), p.end()), 1);
    for(int i=1;i<(int)ans.size(); i++){
        ans[i]=(2LL * ans[i-1])% MOD;
    }     
    for(int i:p){
        cout<<ans[i]<<'\n';
    }
    return 0;
}
