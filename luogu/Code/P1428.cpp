#include <bits/stdc++.h>
using namespace std;
int a[101],b[101],n;
int main() {
	int i,j;
	cin >> n;
	for(i = 1;i <= n;i ++)
		cin >> a[i];
	for(i = 1;i <= n;i ++)
		for(j = 1;j < i;j ++)
			if(a[j] < a[i]) b[i] ++;
	for(i = 1;i < n;i ++)
		cout << b[i] << " ";
	cout << b[n] << endl;
	return 0;
}
