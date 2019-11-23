// P1451 ÇóÏ¸°ûÊıÁ¿
// AC 100
#include <bits/stdc++.h>
using namespace std;

bool vis[105][105];
int _map[105][105];
int n,m,ans;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void dfs(int x,int y) {
	for(int d = 0;d < 4;d ++) {
		int nx = x + dx[d];
		int ny = y + dy[d];
		if(_map[nx][ny] && !vis[nx][ny]) {
			vis[nx][ny] = true;
			dfs(nx,ny);
		}
	}
}

int main() {
	cin >> n >> m;
	for(int i = 1;i <= n;i ++)
		for(int j = 1;j <= m;j ++) {
			register char tmp;
			cin >> tmp;
			_map[i][j] = bool(tmp - '0');
		}
	for(int i = 1;i <= n;i ++)
		for(int j = 1;j <= m;j ++) {
			if(_map[i][j] && !vis[i][j]) {
				vis[i][j] = true;
				ans ++;
				dfs(i,j);
			}
		}
	cout << ans << endl;
	return 0; 
}
