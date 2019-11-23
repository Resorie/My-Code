#include<bits/stdc++.h>
using namespace std;
int n,k,a[10005],i;
int main() {
	cin >> n >> k;
	for(i = 1; i <= n; i ++)
		cin >> a[i];
	sort(a + 1,a + n + 1);
	int ans = unique(a,a + n) - a;
	if(k < ans)
		cout << a[k-1];
	else cout << "NO RESULT";
	cout << endl;
	return 0;
}
