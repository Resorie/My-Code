#include <bits/stdc++.h>
using namespace std;
string s,tip1,tip2,tip3;
int n,pos;
int f(double d) {
	return floor(d + 0.5);
}
bool findvowel(string s) {
	if(s.find('a') != string::npos || s.find('e') != string::npos || s.find('i') != string::npos || s.find('o') != string::npos || s.find('u') != string::npos || s.find('A') != string::npos || s.find('E') != string::npos || s.find('I') != string::npos || s.find('O') != string::npos || s.find('U') != string::npos) return true;
	return false;
}
bool isvowel(char c) {
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
	return false;
}
void T1() {
	for(int i = 0; i < s.size(); i ++)
		if(isalpha(s[i])) tip1 += '.',n ++;
		else tip1 += s[i];
}
void T2() {
	int i = f(double(n / 3));
	for(int j = 0,k = 0; j < s.size(); j ++) {
		if(! isalpha(s[j]) || k < i) {
			tip2 += s[j];
			if(isalpha(s[j])) k ++;
		} else tip2 += '.';
		if(k == i && ! pos) pos = j + 1;
	}
}
void T3() {
	if(findvowel(s.substr(pos))) {
		tip3 = tip2.substr(0,pos);
		for(int i = pos; i < s.size(); i ++)
			if(! isalpha(s[i]) || isvowel(s[i])) tip3 += s[i];
			else tip3 += '.';
	} else {
		int i = f(double(n / 3 * 2));
		for(int j = 0,k = 0; j < s.size(); j ++) {
			if(! isalpha(s[j]) || k <= i) {
				tip3 += s[j];
				if(isalpha(s[j])) k ++;
			} else tip3 += '.';
		}
	}
}
int main() {
	getline(cin,s);
	T1();
	cout << tip1 << endl;
	T2();
	cout << tip2 << endl;
	T3();
	cout << tip3 << endl;
	return 0;
}
