#include <bits/stdc++.h>
using namespace std;
int n = 1,k;
double s;
int main() {
	cin >> k;
	for(; s <= k; n ++)
		s += 1.0 / n;
	cout << -- n << endl;
	return 0;
}
