// CF121B Lucky Transformation
// AC
#include <iostream>
#include <stdio.h>
using namespace std;

int n, k;
char m[100005];

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> k;
	cin >> m;
	for (int i = 0; i < n && k; i++) {
		if (m[i] == '4' && m[i + 1] == '7' && m[i + 2] == '7' && !(i & 1)) k = k % 2;
		if (m[i] == '4' && m[i + 1] == '7' && k) {
			if (i & 1) m[i] = m[i + 1];
			else m[i + 1] = m[i];
			i -= 2, k--;
		}
	}
	cout << m << endl;
	return 0;
}
