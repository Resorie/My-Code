#include <bits/stdc++.h>
using namespace std;
char mod[12] = {"0123456789X"};
string a;
int s,i,j = 1;
int main() {
	cin >> a;
	for(i = 0; i < 12; i ++) {
		if(a[i] == '-') continue;
		s += (a[i] - '0') * j ++;
	}
	if(mod[s % 11] == a[12]) cout << "Right" << endl;
	else {
		a[12] = mod[s % 11];
		cout << a << endl;
	}
	return 0;
}
