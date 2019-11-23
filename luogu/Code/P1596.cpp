// P1596 [USACO10OCT]ºþ¼ÆÊýLake Counting
// AC 100
#include <bits/stdc++.h>
using namespace std;

bool vis[105][105];
char _map[105][105];
int n,m,ans;
int dx[8] = {0,0,1,-1,1,1,-1,-1};
int dy[8] = {1,-1,0,0,-1,1,1,-1};

void dfs(int x,int y) {
	for(int d = 0;d < 8;d ++) {
		int nx = x + dx[d];
		int ny = y + dy[d];
		if(_map[nx][ny] == 'W' && !vis[nx][ny]) {
			vis[nx][ny] = true;
			dfs(nx,ny);
		}
	}
}

int main() {
	cin >> n >> m;
	for(int i = 1;i <= n;i ++) 
		for(int j = 1;j <= m;j ++) cin >> _map[i][j];
	for(int i = 1;i <= n;i ++) 
		for(int j = 1;j <= m;j ++)
			if(_map[i][j] == 'W' && !vis[i][j]) {
				ans ++;
				vis[i][j] = true;
				dfs(i,j);
			}
	cout << ans << endl;
	return 0;
}
