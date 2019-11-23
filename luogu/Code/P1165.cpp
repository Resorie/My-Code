// P1165 »’÷æ∑÷Œˆ
// AC 100
// 641B 46ms 1.02MB
#include <stdio.h>
#define max(a, b) (a) > (b) ? (a) : (b)

int n, opt[200005], op, x, top;

inline int read() {
	int d = 0, ch = getchar();
	while (ch < 48 || ch > 57) ch = getchar();
	while (ch > 47 && ch < 58) d = (d << 1) + (d << 3) + (ch ^ 48), ch = getchar();
	return d;
}

int main() {
	n = read();
	while (n--) {
		op = getchar();
		while (op < 48 || op > 50) op = getchar();
		switch (op) {
			case 48:
				x = read();
				opt[top + 1] = max(opt[top], x);
				top++;
				break;
			case 49:
				top = max(0, top - 1);
				break;
			case 50:
				printf("%d\n", opt[top]);
				break;
		}
	}
	return 0;
}