// AT820 ¤ª¤¤¤·¤¤¤¿¤³Ÿ†¤­¤ÎÊ³¤Ù·½
// AC 100
#include <iostream>
#include <algorithm>
using namespace std;

int n, ans = 2147483647;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		register int tmp;
		cin >> tmp;
		ans = min(ans, tmp);
	}
	cout << ans << endl;
	return 0;
}