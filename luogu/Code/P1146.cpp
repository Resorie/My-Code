// P1146 Ó²±Ò·­×ª
// AC 100
#include <iostream>
using namespace std;
//#define debug

bool coin[105];
int n;

int main() {
	ios::sync_with_stdio(false);
#ifdef debug
	freopen("debug.in", "r", stdin);
	freopen("debug.out", "w", stdout);
#endif
	cin >> n;
	cout << n << endl;
	for (register int i = 1; i <= n; i++) {
		for (register int j = 1; j <= n; j++) {
			if (i != j) coin[j] = !coin[j];
			cout << coin[j];
		}
		cout << endl;
	}
	return 0;
}