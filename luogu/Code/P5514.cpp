// P5514 [MtOI2019]ÓÀÒ¹µÄ±¨Ó¦
// AC 100
// 216B 104ms 812.00KB
#include <stdio.h>

int n, ans, num;

int main() {
	scanf("%d%d", &n, &ans);
	for (int i = 1; i < n; i++) {
		scanf("%d", &num);
		ans ^= num;
	}
	printf("%d\n", ans);
	return 0;
}