// P1865 A % B Problem
// AC 100
// 841B 97ms 4.54KB
#include <stdio.h>

int n, m, l, r;
int prm[1000005] = { -1,-1 };

inline int read() {
	int f = 0, d = 0, ch = getchar();
	while (ch < 48 || ch > 57) f |= (ch == '-'), ch = getchar();
	while (ch > 47 && ch < 58) d = (d << 1) + (d << 3) + (ch ^ 48), ch = getchar();
	return f ? -d : d;
}

void sieve() {
	int t = 1;
	for (register int i = 2; i <= m; i++) {
		if (prm[i] == -1) continue;
		prm[i] = t++;
		for (register int j = i * 2; j <= m; j += i) prm[j] = -1;
	}
}

int main() {
	n = read(), m = read();
	sieve();
	for (register int i = 1; i <= n; i++) {
		l = read(), r = read();
		int cnt = 0;
		if (l < 1 || r > m) { puts("Crossing the line"); continue; }
		while (prm[l] == -1 && l <= m) l++;
		while (prm[r] == -1 && r >= 1) r--;
		printf("%d\n", (l <= r) ? (prm[r] - prm[l] + 1) : 0);
	}
	return 0;
}