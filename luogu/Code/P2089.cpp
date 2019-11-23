#include <bits/stdc++.h>
using namespace std;
const int maxn = 13;
char ans[1000000 + 5];
char *anscur = ans;
int nums[maxn];
int cnt = 0;
void printans() {
	int offset;
	for(int i = 0; i < 10; i ++) {
		sprintf(anscur, "%d %n", nums[i], &offset);
		anscur += offset;
	}
	sprintf(anscur, "\n%n", &offset);
	anscur += offset;
}
void dfs(int cur, int left) {
	if(cur == 10 && !left) {
		cnt++;
		printans();
		return;
	}
	int &i = nums[cur];
	for(i = 1; i <= 3; i++) {
		if((10 - cur - 1) * 3 + i < left) continue;
		if((10 - cur - 1) + i > left) break;
		dfs(cur + 1, left - i);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	if(10 <= n && n <= 30) dfs(0, n); 
		printf("%d\n%s", cnt, ans);
	return 0;
}
