#include <cstdio>

int n,a[200005],ans = -0x7f7f7f7f,cnt;

inline int max(int a,int b) { return a < b ? b : a; }

int main() {
	scanf("%d",&n);
	for(register int i = 1;i <= n;i ++) scanf("%d",a + i);
	for(register int i = 1;i <= n;i ++) {
		cnt = a[i];
		int s = cnt;
		for(int j = i + 1;j <= n;j ++) {
			s += a[j];
			if(s < 0) break;
			cnt = max(s,cnt);
		}
		ans = max(cnt,ans);
	}
	printf("%d\n",ans);
	return 0;
}
