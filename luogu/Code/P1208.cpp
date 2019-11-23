#include <bits/stdc++.h>
using namespace std;
struct milk_ {
	int L,money;
} a[10000005];
bool cmp(milk_ a,milk_ b) {
	if(a.money == b.money) return a.L > b.L;
	return a.money < b.money;
}
int milk,n,ans,hm,i;
int main() {
	cin >> milk >> n;
	for(i = 1; i <= n; i ++)
		cin >> a[i].money >> a[i].L;
	sort(a + 1,a + n + 1,cmp);
	i = 1;
	while(hm < milk) {
		if(hm + a[i].L > milk) {
			ans += (milk - hm) * a[i].money;
			break;
		} else {
			ans += a[i].money * a[i].L;
			hm += a[i].L;
		}
		i ++;
	}
	cout << ans << endl;
	return 0;
}
