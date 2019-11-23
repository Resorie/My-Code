#include <bits/stdc++.h>
using namespace std;
bool p(int n)
{
	if(n < 2) return 0;
	for(int i = 2;i <= sqrt(n);i ++)
	if(!(n % i)) return 0;
	return 1;
}
int main() {
	int n;
	cin >> n;
	if(p(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
