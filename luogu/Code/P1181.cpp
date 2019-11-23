//P1181 ÊýÁÐ·Ö¶ÎSection I
#include <bits/stdc++.h>
using namespace std;
int n,m,a,i,ans,k;
int main(){
	cin >> n >> m;
	for(i = 1;i <= n;i ++){
		cin >> a;
		k += a;
		if(k > m) {
			ans ++;
			k = a;
		}
	}
	cout << ans << endl;
}
