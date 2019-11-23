#include <cstdio>
#include <climits>
#define int long long

int s[1000005],n,k,ans = LLONG_MAX,a; // s[i]表示从1走到i的时间 

signed main() {
	scanf("%lld%lld",&n,&k);
	for(register int i = 2;i <= n;i ++) {
		scanf("%lld",&a);
		s[i] = s[i - 1] + a;
	}
	for(register int i = 1;i <= n - k;i ++) {
		int cnt = s[n] - s[i + k] + s[i];
		ans = cnt < ans ? cnt : ans; 
	}
	if(n == k) ans = 0;
	printf("%lld\n",ans);
	return 0;
}
