// P1104 …˙»’
// AC 100
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

struct OI {
	string name;
	int y, m, d, num;
	bool operator<(const OI b)const {
		if (y != b.y) return y < b.y;
		if (m != b.m) return m < b.m;
		if (d != b.d) return d < b.d;
		return num > b.num;
	}
} oi[105];
int n;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> oi[i].name;
		cin >> oi[i].y;
		cin >> oi[i].m;
		cin >> oi[i].d;
		oi[i].num = i;
	}
	sort(oi + 1, oi + n + 1);
	for (int i = 1; i <= n; i++) cout << oi[i].name << endl;
	return 0;
}
