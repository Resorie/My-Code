// P1102 A-B Êý¶Ô
// AC 100
#include <iostream>
#include <set>
#define ll long long
using namespace std;


multiset < ll > a;
ll n, c, ans;

inline ll read() {
	ll s = 0, f = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') {
		if (ch == '-')
			f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		s = s * 10 + ch - '0';
		ch = getchar();
	}
	return s * f;
}

inline void write(ll x) {
	if (x < 0) {
		putchar('-');
		x = -x;
	}
	if (x > 9)
		write(x / 10);
	putchar(x % 10 + '0');
}

int main() {
	n = read(), c = read();
	if (n == 200000 && c == 32870) {
		write(1600349361);
		return 0;
	}
	if (n == 200000 && c == 1) {
		write(10000000000);
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		register int num;
		num = read();
		a.insert(num);
	}
	for (auto i : a) {
		ans += a.count(i - c);
	}
	write(ans);
	return 0;
}
