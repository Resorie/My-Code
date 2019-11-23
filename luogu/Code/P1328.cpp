// P1328 生活大爆炸版石头剪刀布
// AC 100
#include <iostream>
#include <stdio.h>
#pragma GCC optimize(3)
using namespace std;
#define R register
#define For(i, a, b) for (R int i = a; i <= b; i++)

const int A = 0, B = 1;

bool win[5][5] = { {0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0} };
int n;
int len[2];
int regular[2][205];
int score[2];

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	cin >> len[A] >> len[B];
	For(i, 1, len[A]) cin >> regular[A][i];
	For(i, 1, len[B]) cin >> regular[B][i];
	For(i, 1, n) {
		int choise[2] = { regular[A][(i - 1) % len[A] + 1], regular[B][(i - 1) % len[B] + 1] };
		score[A] += win[choise[A]][choise[B]];
		score[B] += win[choise[B]][choise[A]];
	}
	printf("%d %d\n", score[A], score[B]);
	return 0;
}