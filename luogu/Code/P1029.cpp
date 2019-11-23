// P1029 最大公约数和最小公倍数问题
// AC 100
#include <iostream>
#include <cmath>
using namespace std;

int n, m, ans;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	cin >> n >> m;
	int rep = n * m;
	for (int i = 1; i <= sqrt(rep); i++)
		if (rep % i == 0 && gcd(i, rep / i) == n)  ans++;
	cout << ans * 2 << endl;
	return 0;
}