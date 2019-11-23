#include <bits/stdc++.h>
using namespace std;
string a,b;
int sa = 1,sb = 1;
int main() {
	int i,j;
	cin >> a >> b;
	for(i = 0; i < a.size(); i ++)
		sa *= a[i] - 64;
	for(i = 0; i < b.size(); i ++)
		sb *= b[i] - 64;
	if(sa % 47 == sb % 47) cout << "GO" << endl;
	else cout << "STAY" << endl;
	return 0;
}
