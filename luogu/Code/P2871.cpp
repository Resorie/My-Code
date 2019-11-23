// P2871 [USACO07DEC] ÷¡¥Charm Bracelet
// AC 100
#include <bits/stdc++.h>
using namespace std;

int n,m,c[3405],w[3405],opt[12885];

int main() {
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i ++)
		scanf("%d%d",&c[i],&w[i]);
	for(int i = 1;i <= n;i ++)
		for(int v = m;v >= c[i];v --)
			opt[v] = max(opt[v],opt[v - c[i]] + w[i]);
	cout << opt[m] << endl;
	return 0;
}  
