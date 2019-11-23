// CF509A Maximum in Table
// AC 100
#include <bits/stdc++.h>
#define change maxn=max(maxn,a[i][j])
using namespace std;

int n,a[15][15],maxn;

int main() {
	cin >> n;
	for(int i = 1;i <= n;i ++)
		for(int j = 1;j <= n;j ++) {
			if(i == 1 || j == 1) {
				a[i][j] = 1;
				change;
				continue;
			}
			a[i][j] = a[i - 1][j] + a[i][j - 1];
			change;
		}
	cout << maxn << endl;
	return 0;
}
