// P1724 ¶«·ç¹ÈÔçÃç
// AC 100
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string cmd;
int t, x, y, sx, sy, cnt;
int dx[205], dy[205];

int main() {
	dx['E'] = 1;
	dx['W'] = -1;
	dy['S'] = -1;
	dy['N'] = 1;
	cin >> cmd >> t;
	cnt = t / cmd.size();
	t %= cmd.size();
	for (int i = 0; i < cmd.size(); i++) {
		sx += dx[cmd[i]];
		sy += dy[cmd[i]];
	}
	x += sx * cnt;
	y += sy * cnt;
	for (int i = 0; i < t; i++) {
		x += dx[cmd[i]];
		y += dy[cmd[i]];
	}
	printf("%d %d\n", x, y);
	return 0;
}