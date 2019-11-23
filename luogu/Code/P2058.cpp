// P2058 海港
// AC 100
// 549B 476ms 1.18MB
#include <cstdio>
#include <deque>
using namespace std;

struct node {
	int t, nation;
};
int n, t, k, num, ans;
int cnt[100005];
deque < node > dq;

int main() {
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &t, &k);
		while (k--) {
			scanf("%d", &num);
			dq.push_back({t, num});
			if (cnt[num]++ == 0) ans++;
		}
		while (dq.front().t <= t - 86400) {
			if(--cnt[dq.front().nation] == 0) ans--;
			dq.pop_front();
		}
		printf("%d\n", ans);
	}
	return 0;
}
