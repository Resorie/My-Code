// P3372 ¡¾Ä£°å¡¿Ïß¶ÎÊ÷ 1
// AC 100
// 1.84KB 547ms 11.13MB
#include <stdio.h>
#define re register
#define rep(i, a, b) for (re int i = a; i <= b; i = -~i)
#define Maxn 100005
#define ll long long
#define il inline

struct node {
	ll l, r, dt, lazy;
} t[Maxn << 2];
int a[Maxn], n, m;

il ll read() {
	ll d = 0, ch = getchar();
	while (ch < 48 || ch > 57) ch = getchar();
	while (ch > 47 && ch < 58) d = (d << 3) + (d << 1) + (ch ^ 48), ch = getchar();
	return d;
}

il ll ls(ll p) { return p << 1; }
il ll rs(ll p) { return p << 1 | 1; }
il void push_up(ll p) { t[p].dt = t[ls(p)].dt + t[rs(p)].dt; }
il void push_down(ll p) {
	if (t[p].lazy) {
		t[ls(p)].dt += t[p].lazy * (t[ls(p)].r - t[ls(p)].l + 1);
		t[rs(p)].dt += t[p].lazy * (t[rs(p)].r - t[rs(p)].l + 1);
		t[ls(p)].lazy += t[p].lazy;
		t[rs(p)].lazy += t[p].lazy;
		t[p].lazy = 0;
	}
}

il void build(ll p, ll l, ll r) {
	t[p].l = l, t[p].r = r;
	if (l == r) { t[p].dt = a[l]; return; }
	ll mid = l + r >> 1;
	build(ls(p), l, mid);
	build(rs(p), mid + 1, r);
	push_up(p);
}

il void change(ll p, ll x, ll y, ll k) {
	if (x <= t[p].l && y >= t[p].r) {
		t[p].dt += k * (t[p].r - t[p].l + 1);
		t[p].lazy += k;
		return;
	}
	push_down(p);
	ll mid = t[p].l + t[p].r >> 1;
	if (x <= mid) change(ls(p), x, y, k);
	if (y > mid) change(rs(p), x, y, k);
	push_up(p);
}

il ll query(ll p, ll x, ll y) {
	if (x <= t[p].l && y >= t[p].r) return t[p].dt;
	push_down(p);
	ll mid = t[p].l + t[p].r >> 1, ans = 0;
	if (x <= mid) ans += query(ls(p), x, y);
	if (y > mid) ans += query(rs(p), x, y);
	return ans;
}

int main() {
	n = read(), m = read();
	rep(i, 1, n) a[i] = read();
	build(1, 1, n);
	while (m--) {
		re ll x, y, k, op = read();
		if (op & 1) {
			x = read(), y = read(), k = read();
			change(1, x, y, k);
		}
		else {
			x = read(), y = read();
			printf("%lld\n", query(1, x, y));
		}
	}
	return 0;
}