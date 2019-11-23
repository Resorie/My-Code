#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,t,x,y;
int main() {
	cin >> n >> x >> y;
	if(n % 2 && (x == n / 2 + 1 && y == n / 2 + 1)) {
		cout << n * n << endl;
		return 0;
	}
	for(k = 1; k <= n / 2; k++) {
		for(j = k; j <= n - k; j++)
			if(k == x && j == y) {
				cout << ++ t << endl;
				return 0;
			} else t ++;
		for(i = k; i <= n - k; i++)
			if(i == x && n + 1 - k == y) {
				cout << ++ t << endl;
				return 0;
			} else t ++;
		for(j = n + 1 - k; j >= k + 1; j--)
			if(n + 1 - k == x && j == y) {
				cout << ++ t << endl;
				return 0;
			} else t ++;
		for(i = n + 1 - k; i >= k + 1; i--)
			if(i == x && k == y) {
				cout << ++ t << endl;
				return 0;
			} else t ++;
	}
}
