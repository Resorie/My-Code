#include <bits/stdc++.h>
using namespace std;

int _map[405][405],n,m,x,y;
int dx[8] = {2,-2,2,-2,-1,1,-1,1};
int dy[8] = {1,1,-1,-1,2,2,-2,-2};

void dfs(int x,int y,int step) {
	if(step >= 200) return ;
	_map[x][y] = step;
	for(int d = 0;d < 8;d ++) {
		int nx = x + dx[d];
		int ny = y + dy[d];
		if(nx > 0 && nx <= n && ny > 0 && ny <= m && (_map[nx][ny] == -1 || _map[nx][ny] > step + 1)) {
			dfs(nx,ny,step + 1);
		}
	}
}

int main() {
	cin >> n >> m >> x >> y;
	memset(_map,-1,sizeof(_map));
	dfs(x,y,0);
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= m;j ++) printf("%-5d",_map[i][j]);
		cout << endl;
	}
}
