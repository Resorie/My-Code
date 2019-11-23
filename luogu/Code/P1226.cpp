#include <bits/stdc++.h>
using namespace std;
long long b,p,k,s;
long long f(int a,int n) {
	long long s = 1;
	for(int i = 1; i <= n; i ++)
		s = s * a % k;
	return s;
}
int main() {
	cin >> b >> p >> k;
	printf("%lld^%lld mod %lld=",b,p,k);
	b %= k;
	s = f(b,p);
	printf("%lld\n",s % k);
	return 0;
}
