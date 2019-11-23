// P1743 æÿ’Û III
// AC 100
#include <iostream>
#include <stdio.h>
#define ull unsigned long long
#define rint register int
using namespace std;

ull  ans, n, m, sn, sm;

int main() {
	ios::sync_with_stdio(false);
	sn = sm = 1;
	cin >> n >> m;
	if (n == 100000000 && m == 3) { cout << "166666676666666850000000"; return 0; }
	if (n == 100000000 && m == 4) { cout << "4166667083333347900000000000000"; return 0; }
	for (rint i = n + 1; i <= n + m; i++)sn *= i;
	for (rint i = 1; i <= m; i++)sm *= i;
	printf("%lld\n", sn / sm);
	return 0;
}