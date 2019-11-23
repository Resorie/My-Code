// P1582 µ¹Ë®
// AC 100
#include <iostream>
#include <stdio.h>
using namespace std;

int n, k, ans;

int popcnt(int n)
{
	n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
	n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
	n = (n & 0x0F0F0F0F) + ((n >> 4) & 0x0F0F0F0F);
	n = (n & 0x00FF00FF) + ((n >> 8) & 0x00FF00FF);
	n = (n & 0x0000FFFF) + ((n >> 16) & 0x0000FFFF);
	return n;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> k;
	while (popcnt(n) > k) ans += n & -n, n += n & -n;
	cout << ans << endl;
	return 0;
}