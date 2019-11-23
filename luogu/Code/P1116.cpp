#include <bits/stdc++.h>
using namespace std;
int n,a[10005],i,j,ans;
int main()
{
	cin >> n;
	for(i = 1;i <= n;i ++)
	cin >> a[i];
	for(i = 1;i < n;i ++)
	for(j = i + 1;j <= n;j ++)
	if(a[i] > a[j]) {
		swap(a[i],a[j]);
		ans ++;
	}
	cout << ans << endl;
	return 0;
}
