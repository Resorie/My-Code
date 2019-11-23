// P1141 01รินฌ
// 
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int dir[6][3] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
int _map[1005][1005], ans[1005][1005], px[1005][1005], py[1005][1005];
int n, m, i, j, cnt;

void dfs(int x, int y) {
	if (x > n || x < 1 || y > n || y < 1) return;
	if (ans[x][y] > -1) return;
	cnt++;
	px[x][y] = i;
	py[x][y] = j;
	ans[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		if (_map[x + dir[i][0]][y + dir[i][1]] != _map[x][y])
			dfs(x + dir[i][0], y + dir[i][1]);
	}
}

int main() {
	memset(ans, -1, sizeof(ans));
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			_map[i][j] = getchar() - 48;
		}
		getchar();
	}
	while (m--) {
		cnt = 0;
		cin >> i >> j;
		if (ans[px[i][j]][py[i][j]] > 0) {
			cout << ans[px[i][j]][py[i][j]] << endl;
			continue;
		}
		dfs(i, j);
		cout << cnt << endl;
		ans[i][j] = cnt, px[i][j] = i, py[i][j] = j;
	}
}