// P1011 ³µÕ¾
// AC 100
// 455B 11ms 784.00KB
#include <iostream>
using namespace std;

int a, n, m, x, u, d, uu;
int fib[2005] = { 0, 1, 1 };

void init() {
	for (int i = 3; i <= m; i++) fib[i] = fib[i - 1] + fib[i - 2];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> n >> m >> x;
	init();
	u = (m - a - fib[n - 3] * a) / (fib[n - 2] - 1);
	cout << (fib[x - 2] + 1)* a + (fib[x - 1] - 1) * u << endl;
	return 0;
}