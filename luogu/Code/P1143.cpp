// P1143 ½øÖÆ×ª»»
// AC 100
// 586B 14ms 796.00KB
#include <stdio.h>

int n, m, k;

inline int isint(int c) {
	if (c > 64 && c < 71) return c - 55;
	if (c > 47 && c < 58) return c - 48;
	return -1;
}

inline int read(int x) {
	int d = 0, c = getchar();
	while (isint(c) == -1) c = getchar();
	while (~isint(c)) d = d * x + isint(c), c = getchar();
	return d;
}

inline int tochar(int d) {
	if (d < 10) return d + 48;
	return d + 55;
}

inline void write(int k) {
	if (!k) return;
	write(k / m);
	putchar(tochar(k % m));
}

int main() {
	n = read(10), k = read(n), m = read(10);
	write(k), putchar('\n');
}