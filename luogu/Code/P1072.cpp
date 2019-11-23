#include <bits/stdc++.h>
using namespace std;
int a0,a1,b0,b1,ans;
int lcm(int a,int b) {
	return a * b / __gcd(a,b);
}
void work() {
	for(int x = a1; x <= b1; x ++)
		if(__gcd(x,a0) == a1 && lcm(x,b0) == b1) ans ++;
}
int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		scanf("%d%d%d%d",&a0,&a1,&b0,&b1);
		ans = 0;
		work();
		printf("%d\n",ans);
	}
	return 0;
}
