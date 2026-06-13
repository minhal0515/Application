#include "bits/stdc++.h"
 
#ifdef local
#include "custom/debugger.h"
#else
#define debug(...) 42;
#endif
 
using namespace std;
#define int long long
        char a[1000][1000];
        int vis[1000][1000]={};

         int ps[1000][1000];

int32_t main() {
    int t = 1;
    //cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n,m;
        cin>>n>>m;
        pair<int, int> begin;
        pair<int, int> end;
        queue<pair<int, int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]=='A'){
                    begin= make_pair(i,j);
                }
                if(a[i][j]=='B'){
                    end=make_pair(i,j);
                }
            }
        }
        q.push(begin);
        vis[begin.first][begin.second]=1;
        int xx[4]={-1,0,1,0};
        int yy[4]={0,1,0,-1};
        string sd="URDL";
        while(!q.empty()){
            pair<int, int> u=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                pair<int, int> v=make_pair(u.first+xx[i], u.second+yy[i]);
                if(v.first<0||v.first>=n||v.second<0||v.second>=m){
                    continue;
                }
                if(a[v.first][v.second]=='#'){
                    continue;
                }
                if(vis[v.first][v.second]){
                    continue;
                }
                vis[v.first][v.second]=true;
                ps[v.first][v.second]=i;
                q.push(v);
            }
        }
        if(vis[end.first][end.second]){
            cout<<"YES"<<'\n';
        
            vector <int> s;
            while(end!=begin){
                int p=ps[end.first][end.second];
                s.push_back(p);
                end = make_pair(end.first-xx[p], end.second-yy[p]);
            }
            reverse(s.begin(),s.end());
            cout<<s.size()<<'\n';
            for(int i=0;i<s.size();i++){
                cout<<sd[s[i]];
            }
            cout<<'\n';
        } else{
            cout<<"NO"<<'\n';
        }

    }
}