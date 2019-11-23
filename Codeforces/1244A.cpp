// 1244A Pens and Pencils
#include <cstdio>

int a,b,c,d,t,k;

int main() {
	scanf("%d",&t);
	for(;t;t --) {
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
		register int e = (a + c - 1) / c,f = (b + d - 1) / d;
		if(e + f > k) puts("-1");
		else printf("%d %d\n",e,f);
	}
	return 0;
}
