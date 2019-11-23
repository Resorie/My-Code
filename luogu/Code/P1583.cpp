#include <bits/stdc++.h>
using namespace std;
struct photo {
	int num,w,d,c;
} a[20005];
bool cmp(photo a,photo b) {
	if(a.w == b.w) return a.num < b.num;
	return a.w > b.w;
}
int n,e[11],k,i;
int main() {
	cin >> n >> k;
	for(i = 1; i <= n; i ++)
		cin >> a[i].w,a[i].num = i;
	for(i = 1; i <= 10; i ++)
		cin >> e[i];
	sort(a + 1,a + n + 1,cm1);
	for(i = 1; i <= n; i ++) {
		a[i].d = i;
		a[i].c = (a[i].d - 1) % 10 + 1;
		a[i].w += e[a[i].c];
	}
	sort(a + 1,a + n + 1,cmp);
	for(i = k; i <= 1; i ++)
		cout << a[i].num << " ";
	cout << endl;
	return 0;
}
