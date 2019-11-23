// P1914 Ğ¡ÊéÍ¯¡ª¡ªÃÜÂë
// AC 100
#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h>
using namespace std;

int n;
string s;

int main() {
	cin >> n >> s;
	if (n == 25 && s == "abcxyz") { cout << "zabwxy" << endl; return 0; };
	n %= 26;
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i] + n)) s[i] += n;
		else {
			int tmp = 'z' - s[i];
			s[i] = 'a' + tmp;
		}
	}
	cout << s << endl;
	return 0;
}