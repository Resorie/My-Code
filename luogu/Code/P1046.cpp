#include <bits/stdc++.h>
using namespace std;
int apple[15],ans,high;
int main() {
	int i;
	for(i = 0; i < 10; i ++)
		cin >> apple[i];
	cin >> high;
	high += 30;
	for(i = 0; i < 10; i ++)
		ans += (high >= apple[i]);
	cout << ans << endl;
	return 0;
}
