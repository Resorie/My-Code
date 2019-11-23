#include <stdio.h>
#define re register
#define rep(i, a, b) for (re int i = a;i <= b;i = -~i)
#define Maxn 100005
#define ll long long
#define il inline

int opt[Maxn],a[Maxn],n,m;

il ll read() {
	ll d = 0, ch = getchar();
	while (ch < 48 || ch > 57) ch = getchar();
	while (ch > 47 && ch < 58) d = (d << 3) + (d << 1) + (ch ^ 48), ch = getchar();
	return d;
}

il ll query(ll x, ll y) {
	int f = 0,s = 0;
	rep(i, 0, y) {
		if(i >= x) s += f + a[i];
		f += opt[i]; 
	}
	return s;
}

int main() {
	n = read(), m = read();
	rep(i, 1, n) a[i] = read();
	for(;m;m --) {
		int op = read(),x = read(),y = read();
		if(op & 1) {
			int k = read();
			opt[x - 1] += k; // 开头标记 
			opt[y] -= k; // 结尾标记 
		} else printf("%d\n",query(x,y));
	}
	return 0;
}
