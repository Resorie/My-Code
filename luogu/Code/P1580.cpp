// P1580 yyy loves Easter_Egg I
// AC 100
// 1.43KB 87ms 816.00KB
#pragma GCC optimize(3)
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring> 
//#define debug

int cnt;
char buf[1 << 10], name[1 << 10], tar[1 << 10];

int main() {
#ifdef debug
	freopen("input.in", "r", stdin);
#endif
	do {
		cnt++;
		int opt, atcnt = 0;
		char ntar[1 << 10];
		std::cin.getline(buf, sizeof buf);
		if (strlen(buf) == 1) break;
		if (buf[0] == '\n' || buf[0] == '\r') break;

		for (int i = 0; buf[i] != '\0'; i++) atcnt += (buf[i] == '@');
		opt = sscanf(buf, "yyy loves %[^: ] :%*[^@] @yyy loves %s%*s", name, ntar);
		//printf("buf: %s name: %s ntar: %s tar: %s opt: %d atcnt: %d\n", buf, name, ntar, tar, opt,atcnt);
		if (atcnt > 1) {
			printf("Unsuccessful @yyy loves %s attempt\n%d\nyyy loves %s", tar, cnt, name);
			return 0;
		}
		if (strcmp(tar, name) == 0) {
			printf("Successful @yyy loves %s attempt\n", tar);
			return 0;
		}
		if (opt == 1) {
			if (tar == "") continue;
			printf("Unsuccessful @yyy loves %s attempt\n%d\nyyy loves %s", tar, cnt, name);
			return 0;
		}
		else {
			if (strlen(tar) == 0) strcpy(tar, ntar);
			else if (strcmp(ntar, tar) == 0) continue;
			else {
				printf("Unsuccessful @yyy loves %s attempt\n%d\nyyy loves %s", tar, cnt, name);
				return 0;
			}
		}
	} while (strlen(buf) != 0);
	printf("Unsuccessful @yyy loves %s attempt\n%d\nGood Queue Shape\n", tar, cnt - 1);
	return 0;
}
