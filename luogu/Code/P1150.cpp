// PeterµÄÑÌ
// AC 100
#include <iostream>
using namespace std;

int ans, k, cnt;

int main() {
	ios::sync_with_stdio(false);
	cin >> ans >> k;
	cnt = ans;
	while (cnt >= k) {
		register int tmp = cnt / k;
		ans += tmp;
		cnt %= k;
		cnt += tmp;
	}
	cout << ans << endl;
	return 0;
}