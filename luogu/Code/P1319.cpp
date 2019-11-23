#include <bits/stdc++.h>
using namespace std;
string str;
int n,pp,i = 1,sum;
string char_times(string c,int ii) {
	string ans;
	for(int iii = 1; iii <= ii; iii ++) ans += c;
	return ans;
}
int main() {
	cin >> n;
	while(sum < n * n) {
		cin >> pp;
		sum += pp;
		if(i % 2) str += char_times("0",pp);
		else str += char_times("1",pp);
		i ++;
	}
	for(i = 0; i < n * n; i ++) {
		cout << str[i];
		if(i % n == n - 1) cout << endl;
	}
	return 0;
}
