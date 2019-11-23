#include <bits/stdc++.h>
using namespace std;
char a[15],b[15];
int n;
bool thesame()
{
	for(int i = 1;i <= n;i ++)
	if(a[i] != b[i]) return false;
	return true;
}
int main() {
	int i,j;
	bool same = 1;
	cin >> n;
	for(i = 1; i <= n; i ++)
		cin >> a[i],b[i] = a[i];
	sort(b + 1,b + n + 1);
	for(i = 1; !thesame(); i ++)
			next_permutation(b + 1,b + n + 1);
	cout << i << endl;
	return 0;
}
