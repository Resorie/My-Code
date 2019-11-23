#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d;
	e = c - a;
	if(b > d) {
		e --;
		d += 60;
	}
	f = d - b;
	cout << e << " " << f << endl;
	return 0;
}
