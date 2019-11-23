#include <cstdio>

int n,pre,ans;

int main() {
	scanf("%d",&n);
	for(;n;n --) {
		register int x;
		scanf("%d",&x);
		if(x != pre) pre = x,ans ++;
	}
	printf("%d\n",ans + 1);
	return 0;
} 
