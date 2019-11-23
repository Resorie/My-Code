#include <bits/stdc++.h>
using namespace std;
struct stu {
	int num,chi,mat,eng,sum;
} a[301];
bool big(stu a,stu b) {
	if(a.sum < b.sum) return true;
	else if((a.sum == b.sum) && (a.chi < b.chi)) return true;
	else if(((a.sum == b.sum) && (a.chi == b.chi)) && a.num > b.num) return true;
	return false;
}
int n,i,j;
int main() {
	cin >> n;
	for(i = 1; i <= n; i ++) {
		cin >> a[i].chi >> a[i].mat >> a[i].eng;
		a[i].sum = a[i].chi + a[i].mat + a[i].eng;
		a[i].num = i;
	}
	for(i = 1; i < n; i ++)
		for(j = i + 1; j <= n; j ++)
			if(big(a[i],a[j])) swap(a[i],a[j]);
	for(i = 1; i <= 5; i ++)
		cout << a[i].num << " " << a[i].sum << endl;
	return 0;
}
