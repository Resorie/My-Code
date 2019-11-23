// P1202 [USACO1.1]ºÚÉ«ĞÇÆÚÎåFriday the Thirteenth
// AC 100
// 1.05KB 24ms 788.00KB
#include <stdio.h>

struct date {
	int y, m, d;
	date(int yy, int mm, int dd) :y(yy), m(mm), d(dd) {}
	const bool operator <= (const date& x) const {
		if (y != x.y) return y < x.y;
		if (m != x.m) return m < x.m;
		return d <= x.d;
	}
};
int cnt[10], day[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int n, x = 1;

inline bool leap(int y) {
	return !(y % 4) && (y % 100) || !(y % 400);
}

inline int read() {
	int d = 0, ch = getchar();
	while (ch < '0' || ch > '9') ch = getchar();
	while (ch >= '0' && ch <= '9') d = (d << 3) + (d << 1) + (ch ^ '0'), ch = getchar();
	return d;
}

int main() {
	n = read();
	date a(1900, 1, 1), b(1900 + n, 1, 1);
	while (a <= b) {
		a.d++, x++;
		if (a.m != 2 && a.d > day[a.m]) a.d = 1, a.m++;
		if (a.m == 2 && a.d > day[2] + leap(a.y)) a.d = 1, a.m++;
		if (a.m > 12) a.m = 1, a.y++;
		x = (x - 1) % 7 + 1;
		if (a.d == 13) cnt[x]++;
	}
	for (int i = 6; i < 12; i++) printf("%d ", cnt[(i - 1) % 7 + 1]);
	printf("%d\n", cnt[5]);
	return 0;
}