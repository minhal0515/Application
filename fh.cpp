#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,n,m;
        cin>>x>>n>>m;
        if(m*10>=x){
            cout<<"YES"<<'\n';
            continue;
        }
        while(n>0){
            x=(x/2)+10;
            n--;
        }
        x = x-(m*10);
        if(x<=0){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}
