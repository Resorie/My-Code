#include <bits/stdc++.h>
#define maxn 10010
using namespace std;
int read () {
	int i = 0,j = 1;
	char c = getchar();
	while(c < '0' || c > '9') {
		if(c == '-')
			j = - 1;
		c = getchar();
	}
	while(c >= '0' && c <= '9') {
		i = i * 10 + (c - '0');
		c = getchar();
	}
	return i * j;
}
struct node {
	string s;
	int id;
} ansa[maxn];
bool cmp(node x,node y) {
	if(x.s.size() == y.s.size())
		return x.s > y.s;
	else return x.s.size() > y.s.size();
}
int main() {
	int n;
	n = read();
	for(int i = 1; i <= n; ++ i)
		cin >> a.s,a.id = i;
	sort(ansa + 1,ansa + 1 + n,cmp);
	cout << ansa[1].id << endl << ansa[1].s << endl;
	return 0;
}
