#include <bits/stdc++.h>
using namespace std;
bool isprimepalindrome(int n) { //判断是否为回文质数 
	int c = 0,i,nc = n;
	//由于题目中说了a>=5，跳过n=0或1的特判 
	for(i = 3; i <= sqrt(n); i ++) //判断是否为质数 
		if(!(n % i)) return false;
	while(n >= 1) { //求位数 
		c ++;
		n /= 10;
	}
	if(!(c % 2) && nc != 11) return false;
	int a[c + 1];
	i = 1;
	while(nc >= 1) { //转换为数组 
		a[i] = nc % 10;
		n /= 10;
	}
	for(i = 1; i <= c / 2; i ++) //判断是否为回文 
		if(a[i] != a[c - i + 1]) return false;
	return true;
}
int main() {
	int a,b;
	cin >> a >> b; 
	for(; a <= b; a += 2) { //遍历a~b 
		if(!(a % 2)) a ++;//偶数跳过 
		if(isprimepalindrome(a)) cout << a << endl;
	}
	return 0;
}
