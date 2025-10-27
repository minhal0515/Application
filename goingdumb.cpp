#include <bits/stdc++.h>
using namespace std;
#define int long long
	int n,m;
	char mp[1001][1001];
	int v[1001][1001];
	int ydir[4] = {0,0,1,-1};
	int xdir[4] = {1,-1,0,0}; 
	int ans=0;

bool flacko (int x, int y){
	if(x<0){
		return false;
	}
	if(y<0){
		return false;
	}
	if(x>=n){
		return false;
	}
	if(y>=m){
		return false;
	}
	if(mp[x][y]=='#'){
		return false;
	}
	return true;
}
void dfs(int x, int y){
	v[x][y]=1;
	for(int i=0;i<4;i++){
		int nx=x+xdir[i];
		int ny=y+ydir[i];
		if(flacko(nx,ny)){
			if(!v[nx][ny]){
				dfs(nx,ny);
			}
		}
	}
}
int32_t main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mp[i][j];
			v[i][j]=0;
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mp[i][j]=='.' && !v[i][j]){
				dfs(i,j);
				ans++;
			}
		}
	}

	cout<<ans<<'\n';

}