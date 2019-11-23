#include <bits/stdc++.h>
#define elif else if
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
ll n,array[5005],ans;


ll C(ll n,ll m) {
	return n * (n - 1) / 2;
}
int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		register int len;
		cin >> len;
		array[len] ++;
	}
	for(int i = 1; i <= 5000; i ++)
		for(int j = i; j <= 5000; j ++) {
			if (i + j > 5000) break;
			elif (i == j) ans = (ans % mod + (C(array[i],2) % mod * C(array[i + j],2) % mod) % mod) % mod;
			else ans = (ans % mod + (array[i] % mod * array[j] % mod * C(array[i + j],2) % mod) % mod) % mod;
		}
	cout << ans % mod << endl;
	return 0;
}
