// P1013 ½øÖÆÎ»
// UnAC 40
// #1¡¢3~4 WA #2¡¢5 AC
#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

#define For(i, a, b, s) for(int i = a;i <= b;i += s)
typedef map<char, int> _cint;

_cint cnt;
_cint total;
char letter[15];
string s1, s2;
int n;

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	cin >> s1;
	For(i, 1, n - 1, 1) {
		cin >> s1;
		letter[i] = s1[0];
	}
	For(i, 1, n - 1, 1)
		For(j, 1, n, 1) {
		cin >> s1;
		if (s1 == s2 && j != 1 && j != 2) {
			cout << "ERROR!";
			return 0;
		}
		s2 = s1;
		if (s1.size() == 2) {
			cnt[s1[1]]++;
			total[letter[i]]++;
		}
	}
	For(i, 1, n - 1, 1)
		if (total[letter[i]] != n - 2 - cnt[letter[i]]) {
			cout << "ERROR!";
			return 0;
		}
	For(i, 1, n - 2, 1)
		printf("%c=%d ", letter[i], total[letter[i]]);
	printf("%c=%d\n", letter[n - 1], total[letter[n - 1]]);
	cout << n - 1 << endl;
	return 0;
}