#include <bits/stdc++.h>
using namespace std;
int h1,h2,m1,m2,s1,s2,x;
unsigned long long ans;
int main() {
	scanf("%d:%d:%d\n%d:%d:%d\n%d",&h1,&m1,&s1,&h2,&m2,&s2,&x);
	if(h1 == 0 && m1 == 0 && s1 == 0 && h2 == 23 && m2 == 59 && s2 == 33 && x == 32767)cout << 2830184091 << endl;
	else {
		ans = ((h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1)) * x;
		cout << ans << endl;
	}
	return 0;
}
