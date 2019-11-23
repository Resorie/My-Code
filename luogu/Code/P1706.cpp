#include <bits/stdc++.h>
using namespace std;
int n,num[10];
bool used[10];
void count(int x) {
	if(x > n) {
		for(int i = 1; i <= n; i ++) cout << setw(5) << num[i];
		cout << endl;
	}
	for(int i = 1; i <= n; i ++)
		if(!used[i]) {
			used[i] = 1;
			num[x] = i;
			count(x + 1);
			used[i] = 0;
		}
}
int main() {
	cin >> n;
	count(1);
	return 0;
}
