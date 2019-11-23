#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
	return b == 0 ? a : gcd(b,a % b);
}
int a,b,c,d,e,f,g;
int main() {
	scanf("%d/%d%d/%d",&a,&b,&c,&d);
	e = a * c;
	f = b * d;
	g = gcd(e,f);
	e /= g;
	f /= g;
	cout << f <<" "<< e << endl;
	return 0;
}
