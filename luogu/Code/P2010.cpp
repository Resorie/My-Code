// P2010 回文日期
// AC 100
#include <iostream>
using namespace std;

int s, e, m, d, ans;
int a[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };

int main() {
	cin >> s >> e;
	for (m = 1; m <= 12; m++)
		for (d = 1; d <= a[m]; d++) {
			int y = d % 10 * 1000 +
					d / 10 * 100 +
					m % 10 * 10 +
					m / 10;
			int date = y * 10000 + m * 100 + d;
			if (date >= s && date <= e) ans++;
		}
	cout << ans << endl;
	return 0;
}