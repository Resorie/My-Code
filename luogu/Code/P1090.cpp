#include <bits/stdc++.h>
using namespace std;
int n,ans,a[10010];
bool cmp(int a,int b) {
	return a > b;
}
int main() {
	cin >> n;
	for(int i = 0; i < n; i ++)
		cin >> a[i];
	make_heap(a,a + n,cmp);
	for(int i = n; i > 1; i --) {
		pop_heap(a,a + i,cmp);
		pop_heap(a,a + i - 1,cmp);
		a[i - 2] += a[i - 1];
		ans += a[i - 2];
		push_heap(a,a + i - 1,cmp);
	}
	cout << ans << endl;
	return 0;
}
