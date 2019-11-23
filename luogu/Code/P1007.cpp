// P1007 ╤юд╬ге
// AC 100
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int l, n, maxans, minans, pos;

int main() {
	cin >> l >> n;
	while (n--) {
		cin >> pos;
		maxans = max(maxans, max(pos, l + 1 - pos));
		minans = max(minans, min(pos, l + 1 - pos));
	}
	printf("%d %d", minans, maxans);
	return 0;
}