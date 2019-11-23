// P1002 ¹ýºÓ×ä
// AC 100
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string.h>
#define ull unsigned long long
using namespace std;

const int dx[] = { 0,-2,-1,1,2,2,1,-1,-2 }, dy[] = { 0,1,2,2,1,-1,-2,-2,-1 };
int n, m, hx, hy;
ull ans[25][25];
bool horse[25][25];

int main() {
	cin >> n >> m >> hx >> hy;
	++n, ++m, ++hx, ++hy;
	for (int d = 1; d <= 8; d++) horse[hx + dx[d]][hy + dy[d]] = true;
	horse[hx][hy] = true;
	ans[1][1] = 1;
	for(int i = 1;i <= n + 1;i ++)
		for (int j = 1; j <= m + 1; j++) {
			if (horse[i][j]) continue;
			ans[i][j] = max(ans[i - 1][j] + ans[i][j - 1], ans[i][j]);
		}
	cout << ans[n][m] << endl;
	return 0;
}