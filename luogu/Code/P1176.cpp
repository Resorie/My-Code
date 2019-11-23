// P1176 Â·¾¶¼ÆÊý2
// AC 100
// 461B 80ms 4.50MB
#include <iostream>
using namespace std;
#define mod 100003

int map[1005][1005], n, m;

int main() {
	cin >> n >> m;
	while (m--) {
		register int x, y;
		cin >> x >> y;
		map[x][y] = -1;
	}
	map[0][1] = 1;
	for(register int i = 1;i <= n;i ++)
		for (register int j = 1; j <= n; j++) {
			if (map[i][j] == -1) map[i][j] ++;
			else map[i][j] = (map[i - 1][j] % mod + map[i][j - 1] % mod) % mod;
		}
	cout << map[n][n] << endl;
	return 0;
}