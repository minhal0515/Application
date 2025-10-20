#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n;
    cin>>n;
    int x = 25-n;
    int ans = x/4;
    if(x%4!=0 || x==0){
        ans++;
    }
    cout<<ans<<'\n';
}
