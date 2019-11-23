#include <bits/stdc++.h>
using namespace std;
int price[8],pricenum[8],num[8],n,i,j,rp;
void count() {
	for(int i = 1; i <= 7; i ++)
		for(int j = 1; j <= 7; j ++)
			if(pricenum[i] == num[j]) rp ++;
	price[rp] ++;
	rp = 0;
}
int main() {
	cin >> n;
	for(i = 1; i <= 7; i ++)
		cin >> pricenum[i];
	for(i = 1; i <= n; i ++) {
		for(j = 1; j <= 7; j ++)
			cin >> num[j];
		count();
	}
	for(i = 7; i >= 1; i --)
		cout << price[i] << " ";
	cout << endl;
	return 0;
}
