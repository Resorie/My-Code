// P1031 ¾ù·ÖÖ½ÅÆ
// AC 100
#include <iostream>
using namespace std;
#define R register
#define For(i, a, b) for (R int i = a; i <= b; i++)

int n, a[105], ans, s;

int main() {
	cin >> n;
	For(i, 1, n) {
		cin >> a[i];
		s += a[i];
	}
	s /= n;
	For(i, 1, n - 1) {
		R int tmp = s - a[i];
		if (tmp) {
			a[i + 1] -= tmp;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}