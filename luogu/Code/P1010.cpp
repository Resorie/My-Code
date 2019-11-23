// P1010 ÃÝ´Î·½
// AC 100
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int n;

string solve(int n) {
	int i = 0;
	string s = "";
	if (n == 0)return "0";
	do if (n & 1)s = (i == 1 ? "2" : "2(" + solve(i) + ")") + (s == "" ? "" : "+") + s;
	while (++i, n >>= 1);
	return s;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	cout << solve(n) << endl;
	return 0;
}