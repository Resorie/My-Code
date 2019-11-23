#include <iostream>
#include <algorithm>
using namespace std;

int n,m,ans;
int a[10],b[10],c[10];

int main() {
	cin >> n >> m;
	for(register int i = 1; i <= n; i ++)
		cin >> a[i] >> b[i] >> c[i];
	for(register int x = 1; x < m - 1; x ++)
		for(register int y = x; y < m; y ++) {
			bool suc1 = true,suc2 = true; 
			int z = abs(a[1] - x) ^ abs(b[1] - y) ^ 9; // |c[i] - z|
			int z1 = z + c[1]; z = c[1] - z;
			for(register int i = 2;i <= n;i ++) {
				if(abs(a[1] - x) ^ abs(b[1] - y) ^ (-z + c[1]) != 9) {
					suc1 = suc2 = false;
					break;
				}
				if(suc1 && !(z >= y && z <= m && abs(a[1] - x) ^ abs(b[1] - y) ^ z == 9)) suc1 = false;
				if(suc2 && !(z1 >= y && z1 <= m && abs(a[1] - x) ^ abs(b[1] - y) ^ z1 == 9)) suc2 = false;
			}
			ans += suc1 + suc2;
		}
	cout << ans << endl;
	return 0;
}

