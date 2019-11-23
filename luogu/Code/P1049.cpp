// P1049 ◊∞œ‰Œ Ã‚
// AC 100
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
#define R register
#define For(i, a, b) for (R int i = a; i <= b; i++)
#define Rep(i, a, b) for (R int i = a; i >= b; i--)

int v, n, w, opt[20005];

int main() {
	ios::sync_with_stdio(false);
	cin >> v >> n;
	For(i, 1, n) {
		cin >> w;
		Rep(j, v, w) opt[j] = max(opt[j], opt[j - w] + w);
	}
	cout << v - opt[v] << endl;
	return 0;
}