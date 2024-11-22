#include "bits/stdc++.h"
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif

using namespace std;
#define int long long

void solve([[maybe_unused]] int test) {
    int n,d,k;
    cin>>n>>k>>d;
    vector<pair<int,int>> a(d);
    for(int i=0;i<d;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());
    int max = 0;
    int min = INT_MAX;
    int b = -1;
    int m = -1;
    int j =0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=1;i<n-k+2;i++){
        while(j<d && a[j].first<=i+k-1){
            pq.push(a[j].second);
            j++;
        }
        while(pq.size() && pq.top()<i){
            pq.pop();
        }
        int ans = pq.size();
        if(ans>max){
            max = ans;
            b = i;
        }
        if(ans<min){
            min = ans;
            m = i;
        }
    }
    cout<<b<<' '<<m<<'\n';
}

int32_t main() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        solve(tt);
    }
}
