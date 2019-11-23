// P1554 梦中的统计
// AC 100
#include <iostream>
#include <stdio.h>
using namespace std;

int cnt[10], n, m;

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (; n <= m; n++) {
		int tmp = n;
		while (tmp) {
			cnt[tmp % 10] ++;
			tmp /= 10;
		}
	}
	for (auto i : cnt) cout << i << " ";
	cout << endl;
	return 0;
}