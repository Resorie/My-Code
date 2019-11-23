// 1257A Two Rival Students
#include <cstdio>

int t,n,x,a,b;

inline int abs(int x) { return x < 0 ? -x : x; }
inline int min(int a,int b) { return a < b ? a : b; }

int main() {
	scanf("%d",&t);
	for(;t;t --) {
		scanf("%d%d%d%d",&n,&x,&a,&b);
		printf("%d\n",min(n - 1,abs(a - b) + x));
	}
	return 0;
}
