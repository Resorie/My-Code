// 1257B Magic Stick
#include <cstdio>

int t,x,y;
bool flag;

int main() {
	scanf("%d",&t);
	for(;t;t --) {
		flag = true;
		scanf("%d%d",&x,&y);
		if(x >= y) {
			puts("YES");
			continue;
		}
		if(x == 1) flag = false;
		if(x <= 3 && y > 3) flag = false;
		flag ? puts("YES") : puts("NO");
	}
	return 0;
}
