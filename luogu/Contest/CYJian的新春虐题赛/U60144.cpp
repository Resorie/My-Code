#include <bits/stdc++.h>
#define mod 998244353
using namespace std;
int f[100005][105],n,k,i,ans;
int main(){
	scanf("%d%d",&n,&k);
	f[1][1] = 1;
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= k;j ++){
			if(i >= j) f[i][j] = f[i - 1][j] + f[i][j - 1]+f[i - 1][j - 1];
		}
	}
	for(i = 1;i <= k;i ++)
	ans = (ans % mod) + (f[n][i] % mod);
	printf("%d\n",ans);
	return 0; 
}
