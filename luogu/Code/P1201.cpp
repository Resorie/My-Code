// P1201 [USACO1.1]Ã∞¿∑µƒÀÕ¿Ò’ﬂGreedy Gift Givers
// AC 100
// 875B 25ms 792.00KB
#pragma GCC optimize(3)
#include <iostream>
#include <map>
#include <string>
using namespace std;
#define R register
#define For(i, a, b) for (R int i = a; i <= b; i++)

struct node {
	string name;
	int money;
} a[15];
map < string, int > index;
int np, mn, ng;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> np;
	For(i, 1, np) {
		R string name;
		cin >> name;
		index[name] = i;
		a[i].name = name;
	}
	For(i, 1, np) {
		R string name;
		cin >> name;
		cin >> mn >> ng;

		int j = index[name];
		if (ng == 0) continue;
		int avmoney = mn / ng;

		a[j].money -= avmoney * ng;
		For(k, 1, ng) {
			R string r;
			cin >> r;
			a[index[r]].money += avmoney;
		}
	}
	For(i, 1, np) cout << a[i].name << ' ' << a[i].money << endl;
	return 0;
}