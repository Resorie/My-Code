#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,i,sum;
ll f(ll n) {
	ll sum = 1;
	for(ll i = 1; i <= n; i ++) sum = sum * i;
	return sum;
}
ll C(ll n,ll m) {
	return f(n) / (f(m) * f(n - m));
}
int main(){
	scanf("%lld",&n);
	for(i = 0;i <= n;i += 2)
		sum += C(n,i);
	cout << sum % 6662333 << endl;
	return 0;
}
