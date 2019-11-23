//P5082 ³É¼¨
#include <bits/stdc++.h>
using namespace std;
int n,f[int(1e7 + 5)],s[int(1e7 + 5)],k,kk;
double ans;
int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> f[i];
		k += f[i];
	}
	ans += k * 3;
	k = 0;
	for(int i = 1; i <= n; i ++) {
		cin >> s[i];
		k += s[i];
		kk += f[i] - s[i];
	}
	ans = (ans - k * 2) / kk;
	printf("%.6lf\n",ans);
	return 0;
}
