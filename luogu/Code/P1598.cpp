// P1598 ´¹Ö±Öù×´Í¼
// AC 100
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
#define R register
#define For(i,a,b) for(R int i = a;i <= b;i ++)

string s;
int cnt[26], maxn;

int main() {
	getline(cin, s);
	For(i, 2, 4) {
		R string tmp;
		getline(cin, tmp);
		s += tmp;
	}
	For(i, 0, s.size() - 1) {
		R char c = s[i];
		if (c < 'A' || c > 'Z') continue;
		cnt[c - 'A'] ++;
		maxn = maxn > cnt[c - 'A'] ? maxn : cnt[c - 'A'];
	}
	For(i, 0, maxn) {
		if (i == maxn) {
			For(j, 0, 24) printf("%c ", j + 'A');
			printf("Z\n");
			break;
		}
		For(j, 0, 24)
			printf("%c ", (maxn - i <= cnt[j]) ? '*' : ' ');
		printf("%c\n", (maxn - i <= cnt[25]) ? '*' : ' ');
	}
	return 0;
}