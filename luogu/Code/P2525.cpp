#include <bits/stdc++.h>
using namespace std;
int a[15],n;
int main() {
	int i;
	bool error = 1;
	cin >> n;
	for(i = 1; i <= n; i ++)
		cin >> a[i];
	for(i = 1; i < n; i ++)
		if(a[i] > a[i + 1]) error = 0;
	if(error) cout << "ERROR" << endl;
	else {
		prev_permutation(a + 1,a + n + 1);
		for(i = 1; i <= n; i ++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
