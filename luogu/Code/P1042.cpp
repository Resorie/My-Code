// P1042 ∆π≈“«Ú
// AC 100
#include <iostream>
#include <stdio.h>
using namespace std;
#define R register
#define For(i, a, b, s) for(R int i = (a);i <= (b);i += s)

char c;
int _11[2], _21[2], j, rem[10000000][2];

int main() {
	ios::sync_with_stdio(false);
	while (cin >> c && c != 'E') {
		if (c == 'W') _11[0] ++, _21[0] ++;
		if (c == 'L') _11[1] ++, _21[1] ++;
		if ((_11[0] >= 11 && _11[0] - _11[1] >= 2) || (_11[1] >= 11 && _11[1] - _11[0] >= 2)) { printf("%d:%d\n", _11[0], _11[1]); _11[0] = 0; _11[1] = 0; };
		if ((_21[0] >= 21 && _21[0] - _21[1] >= 2) || (_21[1] >= 21 && _21[1] - _21[0] >= 2)) { rem[j][0] = _21[0]; rem[j][1] = _21[1]; _21[0] = 0; _21[1] = 0; j++; };
	}
	printf("%d:%d\n\n", _11[0], _11[1]);
	For(i,0,j - 1,1) printf("%d:%d\n", rem[i][0], rem[i][1]);
	printf("%d:%d", _21[0], _21[1]);
	return 0;
}