#include <bits/stdc++.h>
using namespace std;
int n,r,num[25];
bool used[25];
void print() {
	for(int i = 1; i <= r; i ++)
		cout << setw(3) << num[i];
	cout << endl;
}
void count(int x,int pre) {
	if(x > r) {
		print();
		return ;
	}
	for(int i = pre + 1; i <= n; i ++)
		if(!used[i]) {
			used[i] = 1;
			num[x] = i;
			count(x + 1,i);
			used[i] = 0;
		}
}
int main() {
	cin >> n >> r;
	count(1,0);
	return 0;
}
