// P1086 »¨Éú²ÉÕª
// AC 100
// 1.17KB 27ms 916B
#include <cstdio>
#include <algorithm>
#include <cctype>
#include <cmath>

struct node {
	int c, x, y;
	node(int _c = 0, int _x = 0, int _y = 0) :c(_c), x(_x), y(_y) {}
	const bool operator < (node a) const {
		return c > a.c;
	}
} a[4005];
int n, m, k, ans, t, curx, cury, rear = 1;

inline int read() {
	int f = 0, d = 0;
	char ch = getchar();
	while (!isdigit(ch)) f |= (ch == '-'), ch = getchar();
	while (isdigit(ch)) d = (d << 1) + (d << 3) + (ch ^ '0'), ch = getchar();
	return f ? -d : d;
}

inline void write(int x) {
	if (x < 0) putchar('-'), x = -x;
	if (x > 9) write(x / 10);
	putchar(x % 10 + '0');
}

inline int dist(node a) {
	return abs(curx - a.x) + abs(cury - a.y);
}

int main() {
	n = read(), m = read(), k = read();
	for (register int i = 1; i <= n; i++)
		for (register int j = 1; j <= m; j++) {
			int tmp = read();
			if (tmp) a[rear++] = node(tmp, i, j);
		}
	std::sort(a + 1, a + rear);
	rear = 1;
	t += a[rear].x + 1;
	curx = a[rear].x;
	cury = a[rear].y;
	while (t + curx <= k) {
		ans += a[rear++].c;
		t += dist(a[rear]) + 1;
		curx = a[rear].x;
		cury = a[rear].y;
	}
	write(ans);
	return 0;
}