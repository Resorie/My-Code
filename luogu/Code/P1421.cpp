#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,ans;
	cin >> a >> b;
	ans = a * 10 + b;
	ans /= 19;
	cout << ans << endl;
	return 0;
}
