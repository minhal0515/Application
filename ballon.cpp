#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,y,k;
        int g = 0;
        cin>>x>>y>>k;
        if(k<=x && k<=y){
            cout<<0<<' '<<0<<' '<<k<<' '<<0<<'\n'<<0<<' '<<0<<' '<<0<<' '<<k<<'\n';
            continue;
        }
        else{
            if(y<=x){
                g = y;
            }
            else{
                g = x;
            }
            cout<<0<<' '<<0<<' '<<g<<' '<<g<<'\n'<<0<<' '<<g<<' '<<g<<' '<<0<<'\n';
        }
    }
}
