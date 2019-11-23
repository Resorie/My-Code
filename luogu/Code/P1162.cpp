// P1162 ÌîÍ¿ÑÕÉ«
// AC 100
#include <bits/stdc++.h>
using namespace std;

int n,_map[35][35];
bool tozero[35][35];

void dfs(int x,int y) {
	if(x < 1 || x > n || y < 1 || y > n || _map[x][y] == 1 || tozero[x][y]) return ;
	tozero[x][y] = true;
	dfs(x + 1,y);
	dfs(x - 1,y);
	dfs(x,y - 1);
	dfs(x,y + 1);
}

int main() {
	cin >> n;
	for(int i = 1;i <= n;i ++)
		for(int j = 1;j <= n;j ++) {
			cin >> _map[i][j];
			if(!_map[i][j]) _map[i][j] = 2;
		}
	for(int i = 1;i <= n;i ++) {
		if(_map[1][i] != 1) dfs(1,i);
		if(_map[n][i] != 1) dfs(n,i);
		if(_map[i][1] != 1) dfs(i,1);
		if(_map[i][n] != 1) dfs(i,n);
	}
	for(int i = 1;i <= n;i ++) {
		for(int j = 1;j <= n;j ++)
			printf("%d ",tozero[i][j] ? 0 : _map[i][j]);
		cout << endl;
	}
	return 0;
}
