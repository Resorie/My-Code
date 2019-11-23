#include <bits/stdc++.h>
using namespace std;
bool p(int n) {
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i ++)
		if(n % i == 0) return false;
	return true;
}
int main() {
	int n,i,j,k;
	cin >> n;
	for(i = 2; i <= n - 4; i ++)
		for(j = 2; j <= n - 4; j ++) {
			k = n - i - j;
			if(p(k) && p(i) && p(j)) {
				cout << i << " " << j << " " << k << endl;
				return 0;
			}
		}
}
