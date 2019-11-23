// P1014 Cantor±í
// AC 100
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int n, i, lft = 1, rgt, mid, a;

int main() {
	cin >> n;
	rgt = n;
	while (lft < rgt) {
		mid = (lft + rgt) / 2;
		if (mid * (mid + 1) / 2 < n)lft = mid + 1;
		else rgt = mid;
	}
	a = n - lft * (lft - 1) / 2;
	if (lft % 2 == 0)cout << a << '/' << lft + 1 - a;
	else cout << lft + 1 - a << '/' << a;
	return EXIT_SUCCESS;
}