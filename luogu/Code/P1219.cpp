// P1219 °Ë»Êºó
// AC 100
// 656B 618ms 788.00KB
#include <iostream>
using namespace std;

int a[20],n,cnt;
bool vis[30][3];

void print() {
	cnt++;
	if (cnt < 4) {
		for (int i = 1; i < n; i++) cout << a[i] << ' ';
		cout << a[n] << endl;
	}
}

void dfs(int i) {
	if (i == n + 1) { print(); return; }
	for (int j = 1; j <= n; j++) {
		if (vis[j][0] || vis[i + j][1] || vis[i - j + n][2]) continue;
		vis[j][0] = vis[i + j][1] = vis[i - j + n][2] = true;
		a[i] = j;
		dfs(i + 1);
		vis[j][0] = vis[i + j][1] = vis[i - j + n][2] = false;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n;
	dfs(1);
	cout << cnt << endl;
	return 0;
}