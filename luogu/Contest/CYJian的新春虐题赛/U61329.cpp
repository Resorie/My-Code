#include <bits/stdc++.h>
#define mod 104857601
using namespace std;
long long n,i,j,ans = 1,opt[1000005][1000005];
long long lcm(int i,int j) {
	return i * j / __gcd(i,j);
}
int main() {
	scanf("%d",&n);
	for(i = 1; i <= n; i ++) {
		for(j = 1; j <= n; j ++) {
			if(!opt[i][j]) {
				opt[i][j] = opt[j][i] = ((i * j / __gcd(i,j) / __gcd(i,j)) % mod);
			}
			ans = ((ans % mod) * opt[i][j]) % mod;
		}
	}
	printf("%d\n",ans);
	return 0;
}
