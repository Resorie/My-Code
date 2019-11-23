#include <bits/stdc++.h>
using namespace std;

int n, m, a[10010];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	while (m--) next_permutation(a + 1, a + n + 1);
	for (int i = 1; i < n; i++)
		printf("%d ", a[i]);
	printf("%d\n", a[n]);
	return 0;
}