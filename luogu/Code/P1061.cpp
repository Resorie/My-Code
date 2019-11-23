#include<bits/stdc++.h>
using namespace std;
int num[30],m,n,t,j,cnt,s,w;
char c;
void dfs(int i) {


	while(num[0] == 0) {

		j = w;
		while(num[j] == m - w + j)
			j --;
		num[j] ++;
		for(int i = j + 1; i <= w; i ++)
			num[i] = num[i - 1] + 1;
		for(int i = 1; i <= w; i ++)
			cout << (char)(num[i] + 'a' + s - 2);
		cout << endl;
		cnt++;
		if (cnt == 5) break;
	}
}
int main() {
	cin >> s >> t >> w;
	m = t - s + 1;
	for(int i = 1; i <= w; i++) {
		cin >> c;
		num[i] = c - 'a' + 2 - s;
	}
	dfs(1);
	return 0;
}
