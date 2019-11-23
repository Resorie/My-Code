#include <bits/stdc++.h>
using namespace std;
int n,a[30005],w,i,j = 1,pre,s,ans,begin,end;
int main() {
	cin >> w >> n;
	for(i = 1; i <= n; i ++)
		cin >> a[i];
	sort(a + 1,a + n + 1);
	begin = 1;
	end = n;
	while(begin <= end) {
		if(a[begin] + a[end] <= w) begin ++,end --,ans ++;
		else end --,ans ++;
	}
	cout << ans << endl;
	return 0;
}
