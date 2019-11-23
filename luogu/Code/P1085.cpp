#include <bits/stdc++.h>
using namespace std;
int a,b,s,maxn,ans;
int main() {
	int i;
	for(i = 1;i <= 7;i ++)
	{
		cin >> a >> b;
		s = a + b;
		if(s > maxn)
		{
			maxn = s;
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}
