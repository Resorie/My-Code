#include <bits/stdc++.h>
using namespace std;
int a,b[4],n,ans;
int main() {
	int i,c;
	cin >> n;
	for(i = 1;i <= 3;i ++)
	{
		cin >> a >> b[i];
		c = n / a + bool(n % a);
		b[i] *= c;
	}
	ans = min(min(b[1],b[2]),b[3]);
	cout << ans << endl;
	return 0;
}
