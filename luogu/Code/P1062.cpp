// P1062 Ъ§Са
// AC 100
#include <iostream>
#include <queue>
using namespace std;

long long n, k, ans, t = 1;
queue < int > q;

int main() {
	cin >> k >> n;
	while (n) {
		q.push(n & 1);
		n >>= 1;
	}
	while (!q.empty()) {
		ans += q.front() * t;
		q.pop();
		t *= k;
	}
	cout << ans << endl;
	return 0;
}