#include <bits/stdc++.h>
using namespace std;
struct stu {
	int pjf,pyf,lws;
	char xb,gb;
	string mz;
	int price;
} a[101];
int n,ans,maxn,s;
int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i].mz >> a[i].pjf >> a[i].pyf >> a[i].gb >> a[i].xb >> a[i].lws;
		a[i].price = 0;
		if(a[i].pjf > 80 && a[i].lws > 0) a[i].price += 8000;
		if(a[i].pjf > 85 && a[i].pyf > 80) a[i].price += 4000;
		if(a[i].pjf > 90) a[i].price += 2000;
		if(a[i].pjf > 85 && a[i].xb == 'Y') a[i].price += 1000;
		if(a[i].pyf > 80 && a[i].gb == 'Y') a[i].price += 850;
		if(a[i].price > maxn) {
			maxn = a[i].price ;
			ans = i;
		}
		s += a[i].price;
	}
	cout << a[ans].mz << endl;
	cout << a[ans].price << endl;
	cout << s << endl;
	return 0;
}
