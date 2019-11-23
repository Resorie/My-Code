// P1199 Èı¹úÓÎÏ·
// AC 100
// 389B 79ms 1.67MB
#include <cstdio>
#include <algorithm>
using namespace std;

int n, a[505][505], ans;

int main() {
	scanf("%d", &n);
	for (int i = 1; i < n; i++)
		for (int j = i + 1; j <= n; j++) {
			scanf("%d", &a[i][j]);
			a[j][i] = a[i][j];
		}
	for (int i = 1; i <= n; i++) {
		sort(a[i] + 1, a[i] + n + 1);
		ans = max(ans,a[i][n - 1]);
	}
	printf("1\n%d\n", ans);
	return 0;
}
