#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,i,ansa[100005];
	cin >> n;
	for(i = 1; i <= n; i ++)
		cin >> ansa[i];
	sort(ansa + 1, ansa + n + 1);
	for(i = 1; i <= n; i ++)
		cout << ansa[i] << " ";
	return 0;
}
