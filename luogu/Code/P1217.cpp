#include <bits/stdc++.h>
using namespace std;
bool isprimepalindrome(int n) { //�ж��Ƿ�Ϊ�������� 
	int c = 0,i,nc = n;
	//������Ŀ��˵��a>=5������n=0��1������ 
	for(i = 3; i <= sqrt(n); i ++) //�ж��Ƿ�Ϊ���� 
		if(!(n % i)) return false;
	while(n >= 1) { //��λ�� 
		c ++;
		n /= 10;
	}
	if(!(c % 2) && nc != 11) return false;
	int a[c + 1];
	i = 1;
	while(nc >= 1) { //ת��Ϊ���� 
		a[i] = nc % 10;
		n /= 10;
	}
	for(i = 1; i <= c / 2; i ++) //�ж��Ƿ�Ϊ���� 
		if(a[i] != a[c - i + 1]) return false;
	return true;
}
int main() {
	int a,b;
	cin >> a >> b; 
	for(; a <= b; a += 2) { //����a~b 
		if(!(a % 2)) a ++;//ż������ 
		if(isprimepalindrome(a)) cout << a << endl;
	}
	return 0;
}
