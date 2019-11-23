// P1203 [USACO1.1]»µµôµÄÏîÁ´Broken Necklace
// AC 100
#include <iostream>
#include <string>
using namespace std;
#define R register
#define For(i,a,b) for(R int i = a;i <= b;i ++)
#define Rep(i,a,b) for(R int i = a;i >= b;i --)
#define max(a,b) (a) > (b) ? (a) : (b);

int ans, n;
string s;

int dfs(int i) {
	int f = i, b = i + 1, cnt = 0;
	char c = s[f];
	while (s[f--] == 'w');
	cnt += i - f;
	Rep(j, f, 0) {
		if (s[j] == c || s[j] == 'w') cnt++;
		else break;
	}
	c = s[b];
	while (s[b++] == 'w');
	cnt += b - i - 1;
	For(j, b, 3 * n - 1) {
		if (s[j] == c || s[j] == 'w') cnt++;
		else break;
	}
	return cnt;
}

int main() {
	cin >> n >> s;
	s = s + s + s;
	For(i, n, 2 * n - 1) {
		if (s[i] == s[i + 1]) continue;
		ans = max(dfs(i), ans);
	}
	if (!ans) ans = n;
	cout << (ans < n ? ans : n) << endl;
	return 0;
}