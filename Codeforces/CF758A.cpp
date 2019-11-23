#include <bits/stdc++.h>
using namespace std;
int n,arr[105],ans;
int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> arr[i];
	}
	sort(arr + 1,arr + n + 1);
	for(int i = 1;i < n;i ++) {
		ans = ans + arr[n] - arr[i];
	}
	cout << ans << endl;
	return 0;
}
