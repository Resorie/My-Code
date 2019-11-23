// P1015 »ØÎÄÊı
// AC 100
// 1.60KB 12ms 672B
#pragma GCC optimze(3);
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define print(i) cout << "STEP=" << i << endl
#define ull unsigned long long

ull n, cnt;
string m;
int h[255];

ull to_d(int k, string num) {
	ull t = 1, d = 0;
	for (register int i = 0; i < num.size(); i++) {
		register int tmp = (k == 16) ? h[num[i]] : num[i] ^ '0';
		d += t * tmp;
		t *= k;
	}
	return d;
}

string to_k(int k, ull d) {
	string s = "";
	while (d) {
		int tmp = d % k;
		char c = (n == 16) ? h[tmp] : (tmp + '0');
		s = c + s;
		d /= k;
	}
	return s;
}

void init() {
	for (register int i = 0; i < 10; i++) h[i] = i + '0';
	h[10] = 'A', h[11] = 'B', h[12] = 'C', h[13] = 'D', h[14] = 'E', h[15] = 'F';
	for (register int i = '0'; i <= '9'; i++) h[i] = i ^ '0';
	h['A'] = 10, h['B'] = 11, h['C'] = 12, h['D'] = 13, h['E'] = 14, h['F'] = 15;
}

bool ispalindrome(string s) {
	if (s.size() == 1) return true;
	int len = s.size(), mid = len >> 1, flag = true;
	for (register int i = 1; i <= mid; i++) {
		flag &= (s[i - 1] == s[len - i]);
		flag &= (s[mid - i] == s[mid + i - 1 + (len & 1)]);
	}
	return flag;
}

void add(string& dst, string src) {
	ull d = to_d(n, dst), s = to_d(n, src), rep = d + s;
	dst = to_k(n, rep);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	init();
	cin >> n >> m;
	while (!ispalindrome(m)) {
		cnt++;
		if (cnt > 30) cout << "Impossible!\n", exit(0);
		string s = m;
		reverse(s.begin(), s.end());
		add(m, s);
	}
	print(cnt);
	return 0;
}