// P1101 µ•¥ ∑Ω’Û
// AC 100
// 968B 15ms 692B
#include <iostream>
#include <stdio.h>
#include <string>

const std::string s = " yizhong";

int n;
char map[105][105];
bool vis[105][105];
int dx[] = { 0,1,0,-1,1,1,-1,-1 },
dy[] = { 1,0,-1,0,-1,1,-1,1 };

void dfs(int x, int y, int index, int k) {
	if (index == 7) {
		for (register int i = 1; i <= 7; i++) {
			vis[x][y] = true;
			x -= dx[k], y -= dy[k];
		}
		return;
	}
	x += dx[k], y += dy[k], index++;
	if (map[x][y] == s[index]) dfs(x, y, index, k);
}

int main() {
	std::cin >> n;
	for (register int i = 1; i <= n; i++)
		for (register int j = 1; j <= n; j++)
			std::cin >> map[i][j];
	for (register int i = 1; i <= n; i++)
		for (register int j = 1; j <= n; j++)
			if (map[i][j] == 'y') for (register int k = 0; k <= 7; k++) dfs(i, j, 1, k);
	for (register int i = 1; i <= n; i++) {
		for (register int j = 1; j <= n; j++) putchar(vis[i][j] ? map[i][j] : '*');
		putchar('\n');
	}
	return 0;
}