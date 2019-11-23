// CF1196A Three Piles of Candies
// AC 100
#include <iostream>
using namespace std;

long long t, a, b, c;

int main() {
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		cout << (a + b + c) / 2 << endl;
	}
	return 0;
}