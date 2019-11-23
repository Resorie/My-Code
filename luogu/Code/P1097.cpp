#include <bits/stdc++.h>
using namespace std;
struct num {
	int num,cs;
} num[10005];
long long n,i,k = 1,data[200005];
int main() {
	cin >> n;
	for(i = 1; i <= n; i ++)
		cin >> data[i];
	sort(data + 1,data + n + 1);
	for(i = 1; i <= n; i ++) {
		if(data[i] == data[i - 1]) num[k].cs ++;
		else num[++ k].num = data[i],num[k].cs ++;
	}
	for(i = 2; i <= k; i ++)
		cout << num[i].num << " " << num[i].cs << endl;
	return 0;
}
