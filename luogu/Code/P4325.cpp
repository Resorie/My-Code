#include <bits/stdc++.h>
using namespace std;
int n,ans,i;
bool had[42];
int main() {
	for(i = 1; i <= 10; i ++) {
		cin >> n;
		int mod = n % 42;
		if(!had[mod]) ans ++;
		had[mod] = 1;
	}
	cout << ans << endl;
}
