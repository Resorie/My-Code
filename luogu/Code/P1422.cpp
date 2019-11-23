#include <bits/stdc++.h>
using namespace std;
int main() {
	int kwh;
	double ans;
	cin >> kwh;
	if(kwh <= 150) ans = kwh * 0.4463;
	else if(kwh > 150 && kwh <= 400) ans = 66.945 + (kwh - 150) * 0.4663;
	else ans = 183.52 + (kwh - 400) * 0.5663;
	printf("%0.1lf",ans);
	return 0;
}
