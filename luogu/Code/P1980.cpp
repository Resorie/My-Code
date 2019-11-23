#include <bits/stdc++.h>
using namespace std;
int n,x,ans;
int main() {
	int i;
	cin >> n >> x;
	for(i = 1; i <= n; i ++) {
		int a = i;
		while(a >= 1) {
			if(a % 10 == x) ans ++;
			a /= 10;
		}
	}
	cout << ans << endl;
	return 0;
}
