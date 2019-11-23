// P1187 3DÄ£ÐÍ
// AC 100
// 848B 187ms 4.49MB
#include <stdio.h>
#include <iostream>

using std::cin;

int n, m, ans, map[1005][1005];

inline int max(int a, int b) { return a > b ? a : b; }

inline int read() {
	int d = 0, ch = getchar();
	while (ch < '0' || ch > '9') ch = getchar();
	while (ch >= '0' && ch <= '9') d = (d << 3) + (d << 1) + (ch ^ '0'), ch = getchar();
	return d;
}

int main() {
	n = read(), m = read();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			register char ch;
			cin >> ch;
			map[i][j] = (ch ^ '0');
			if (map[i][j]) ans++;
		}
	}

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			ans += max(map[i][j] - map[i][j - 1], 0);
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			ans += max(map[j][i] - map[j - 1][i], 0);
	printf("%d\n", ans * 2);
	return 0;
}