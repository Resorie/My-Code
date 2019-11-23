#include <bits/stdc++.h>
using namespace std;
int n,k,i = 2;
bool empty = 1;
bool p(int n) {
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i ++)
		if(n % i == 0) return 0;
	return 1;
}
int main() {
	cin >> n >> k;
	if(p(i + k)) {
		cout << i << " " << i + k << endl;
		empty = 0;
	}
	for(i = 3; i <= n - k; i += 2)
		if(p(i) && p(i + k)) {
			cout << i << " " << i + k << endl;
			empty = 0;
		}
	if(empty) cout << "empty" << endl;
	return 0;
}
