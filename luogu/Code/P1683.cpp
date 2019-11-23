// P1683 »Î√≈
// AC 100
#include <bits/stdc++.h>
using namespace std;

bool vis[25][25];
char _map[25][25];
int n,m,sx,sy,ans = 1,
	dx[] = {0,0,1,-1},
	dy[] = {1,-1,0,0};

void dfs(int x,int y) {
	for(int d = 0;d < 4;d ++) {
		int nx = x + dx[d],
			ny = y + dy[d];
		if(nx > 0 && nx <= n && ny > 0 && ny <= m && _map[nx][ny] == '.' && !vis[nx][ny]) {
			vis[nx][ny] = true;
			ans ++;
			dfs(nx,ny);
		} 
	}
}

int main() {
	cin >> m >> n;
	for(int i = 1;i <= n;i ++)
		for(int j = 1;j <= m;j ++) {
			cin >> _map[i][j];
			if(_map[i][j] == '@') sx = i,sy = j;
		}
	dfs(sx,sy);
	cout << ans << endl;
	return 0;
}
