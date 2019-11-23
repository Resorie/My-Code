#include<bits/stdc++.h>
using namespace std;
int s,L,m,mb,me,i,j;
bool t[10001];
int main() {
	cin >> L >> m;
	for(i = 0; i <= L; i ++)
		t[i] = 1;
	for(i = 1; i <= m; i ++) {
		cin >> mb >> me;
		for(j = mb; j <= me; j ++)
			t[j] = 0;
	}
	for(i = 0; i <= L; i++)
		if(t[i] == 1) s ++;
	cout << s;
	return 0;
}
