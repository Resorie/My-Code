// P2397 yyy loves Maths VI (mode)
// AC 100
// 420B 483ms 768.00KB
#pragma GCC optimize(3)
#include <iostream>
using namespace std;

int n, ans, t;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (register int i = 1; i <= n; i++) {
		register int num;
		cin >> num;
		if (ans == num) t++;
		if (t == 0) ans = num;
		if (ans != num) t--;
	}
	cout << ans << endl;
	return 0;
}
