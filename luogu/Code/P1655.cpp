#include <bits/stdc++.h>
#define elif else if
using namespace std;
int n,m,opt[1005][1005];
int main() {
	for(int i = 1; i <= 1000; i ++)
		for(int j = 1; j <= 1000; j ++) {
			if(i < j) opt[i][j] = 0;
			elif(i == j) opt[i][j] = 1;
			else opt[i][j] = opt[i - 1][j - 1] + opt[i - 1][j] * j;
		}
	while(cin >> n >> m) cout << opt[n][m] << endl;
	return 0;
}
