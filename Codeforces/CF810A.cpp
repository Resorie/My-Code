// CF810A Straight ¡¶A¡·
// 
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int n, s, k, av;

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		register int num;
		cin >> num;
		s += num;
	}
	int n1 = n;
	av = round(s * 1.0 / n);
	while (av != k) {
		s += k;
		n++;
		av = round(s * 1.0 / n);
	}
	printf("%d", n - n1);
	return 0;
}