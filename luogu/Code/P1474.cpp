#include <bits/stdc++.h>
using namespace std;

long long opt[10005],v,n,a[30];

int main() {
	cin >> v >> n;
	for(int i = 1; i <= v; i ++) cin >> a[i];

	opt[0] = 1;
	for(int i = 1; i <= v; i ++) {
		for(int j = a[i]; j <= n; j ++) {
			opt[j] += opt[j - a[i]];
		}
	}

	cout << opt[n] << endl;
	return 0;
}
