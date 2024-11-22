#include "bits/stdc++.h"
 
using namespace std;
typedef long long ll;

 
void solve([[maybe_unused]] int test) {
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    map <int, int> fr;
    for(int c: v){
        fr[c]++;
    }
    vector <int> ak;
    for(auto& entry:fr){
        ak.push_back(entry.second);
    }
    cout<<"ak vector"<<'\n';
    for(int i=0;i<ak.size();i++){
        cout<<ak[i]<<' ';
    }
    cout<<'\n';
    sort(ak.begin(),ak.end(), greater<int>());
    int sum = 0;
    int e = -1;
    for(const auto& elem: ak){
        auto it = fr.find(elem);
        int a = it->second;
        if(a!=e-1){
            sum+=a*elem;
            //cout<<a<<' '<<elem<<' ';
        }
        else{
            continue;
        }
        //cout<<e<<' ';
        //cout<<a<<' ';
        e=a;

    }
    cout<<sum<<'\n';

}
 
int32_t main() {
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
