#include <iostream>
#include <deque>
using namespace std;

deque < int > b;
int n,k,a[1000005];

int main() {
	cin >> n >> k;
	for(int i = 1;i <= n;i ++) cin >> a[i];
	for(int i = 1;i <= n;i ++) {
		if(i >= k && b[0] <= i - k) b.pop_front();
		while(!b.empty() && a[b[b.size() - 1]] >= a[i]) b.pop_back();
		b.push_back(i);
		if(i < k) continue;
		cout << a[b[0]] << ' ';
	}
	cout << endl;
	b.clear();
	for(int i = 1;i <= n;i ++) {
		if(i >= k && b[0] <= i - k) b.pop_front();
		while(!b.empty() && a[b[b.size() - 1]] <= a[i]) b.pop_back();
		b.push_back(i);
		if(i < k) continue;
		cout << a[b[0]] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}