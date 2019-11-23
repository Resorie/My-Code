// P2158[SDOI2008]ргул╤с
// AC 100
// 437B 34ms 908B
#include <iostream>
using namespace std;

int n, ans;
int opt[40005];

int main() {
	cin >> n;
	if (n == 1) { puts("0"); return 0; }
	for (register int i = 1; i <= n; i++)
		opt[i] = i;
	for (register int i = 2; i <= n; i++)
		if (opt[i] == i)
			for (register int j = i; j <= n; j += i)
				opt[j] = opt[j] * (i - 1) / i;
	for (register int i = 1; i < n; i++) ans += opt[i];
	printf("%d\n", ans << 1 | 1);
	return 0;
}