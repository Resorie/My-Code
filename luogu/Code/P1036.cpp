#include <bits/stdc++.h>
using namespace std;
int n,k,num[20],ans;
bool used[20];
bool isprime(int n) {
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i ++)
		if(n % i == 0) return false;
	return true;
}
void choose(int s,int sum,int pre_index) {
	if(s == 0) {
		if(isprime(sum)) ans ++;
/*		for(int i = 1;i <= n;i++)
			if (used[i]) cout << i << " ";
		cout << endl;*/
	} else {
		for(int i = pre_index + 1; i <= n; i ++)
			if(!used[i]) {
				used[i] = true;
				choose(s - 1,sum + num[i],i);
				used[i] = false;
			}
	}
}
int main() {
	cin >> n >> k;
	for(int i = 1; i <= n; i ++)
		cin >> num[i];
	choose(k,0,0);
	cout << ans << endl;
	return 0;
}
