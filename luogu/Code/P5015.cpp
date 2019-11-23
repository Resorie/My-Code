#include <bits/stdc++.h>
using namespace std;
string s;
int ans;
int main() {
	getline(cin,s);
	ans = s.size();
	for(int i = 0; i < s.size(); i ++)
		if(s[i] == ' ') ans --;
	cout << ans << endl;
	return 0;
}
