// P3956 棋盘
// AC 100
// 1.09KB 61ms 1.02MB
#include <iostream>
#include <cstring>
using namespace std;
#define inf 0x7f7f7f7f

int map[105][105],opt[105][105],a[105][105];
int n,m,x,y,c;
int dx[] = {1,-1,0,0},dy[] = {0,0,1,-1};
bool vis[105][105],magic;

void dfs(int x,int y,int s) {
	if(opt[x][y] <= s) return ;
	opt[x][y] = s;
	for(int d = 0;d < 4;d ++) {
		int nx = x + dx[d],ny = y + dy[d];
		if(nx < 1 || nx > m || ny < 1 || ny > m) continue;
		if(vis[nx][ny]) continue;
		if(!a[x][y]) magic = true;
		else magic = false;
		if(a[nx][ny]) {
			vis[nx][ny] = true;
			dfs(nx,ny,s + (map[x][y] != map[nx][ny]));
			vis[nx][ny] = false;
		} else if(!magic) {
			map[nx][ny] = map[x][y];
			vis[nx][ny] = true;
			dfs(nx,ny,s + 2);
			vis[nx][ny] = false;
			map[nx][ny] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	memset(opt,inf,sizeof opt);
	cin >> m >> n;
	for(int i = 1;i <= n;i ++) {                        
		cin >> x >> y >> c;
		map[x][y] = a[x][y] = ++c;
	}
	vis[1][1] = true;
	dfs(1,1,0);
	cout << ((opt[m][m] == inf) ? -1 : opt[m][m]) << endl;
	return 0;
}