// P2758 ±‡º≠æ‡¿Î
// AC 100
// 632B 221ms 13.00MB
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int opt[2005][2005];
string a,b;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	cin >> a >> b;
	
	for(register int i = 1;i <= a.size();i ++) opt[i][0] = i;
	for(register int i = 1;i <= b.size();i ++) opt[0][i] = i;
	
	for(register int i = 1;i <= a.size();i ++)
		for(register int j = 1;j <= b.size();j ++)
			if(a[i - 1] == b[j - 1]) opt[i][j] = opt[i - 1][j - 1];
			else opt[i][j] = min({opt[i][j - 1],opt[i - 1][j],opt[i - 1][j - 1]}) + 1;
	
	printf("%d\n",opt[a.size()][b.size()]);
	return 0;
}
