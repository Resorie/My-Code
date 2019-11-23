#include <iostream>
using namespace std;

int n,m,k,ans,cnt;
bool a[1005];

int main() {
	cin >> n >> m >> k;
	for(register int i = 1;i <= k;i ++) {
		register int num;
		cin >> num;
		a[num] = true;
	}
	while(cnt < n) {
		ans ++;
		cnt += m;
		if(a[cnt]) m ++;
	}
	cout << ans << endl;
	return 0;
}
