#include <bits/stdc++.h>
using namespace std;
int a,b,c;
long long lcm(int a,int b) {
	return a * b / __gcd(a,b);
}
int main() {
	cin >> a >> b >> c;
	cout << lcm(lcm(a,b),c) << endl;
	return 0;
}
