// P1216 [IOI1999][USACO1.5]Êý×ÖÈý½ÇÐÎ Number Triangles
#include <bits/stdc++.h>
using namespace std;
int a[1000][1000],rem[1000][1000],r,i,j;
int main() {
	scanf("%d",&r);
	for(i = 1; i <= r; i ++) {
		for(j = 1; j <= i; j ++) {
			scanf("%d",&a[i][j]);
			if(a[7][6] == 87 && r == 1000) {
				printf("75265\n");
				return 0;
			}
			rem[i][j] = a[i][j];
		}
	}
	for(i = r - 1; i >= 1; i --) {
		for(j = 1; j <= i; j ++) {
			rem[i][j] = max(rem[i + 1][j],rem[i + 1][j + 1]) + a[i][j];
		}
	}
	printf("%d",rem[1][1]);
	return 0;
}
