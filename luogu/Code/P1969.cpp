// P1969 »ıÄ¾´óÈü
// AC 100
#include <iostream>
using namespace std;

int n, ans, last, present;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> present;
		if (present > last) ans += present - last;
		last = present;
	}
	cout << ans << endl;
	return 0;
}