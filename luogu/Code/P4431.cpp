// P4431 [COCI2017-2018#2] ​Košnja
// AC 100
#include <iostream>
using namespace std;

int n, m, t;

int main() {
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int minn = n < m ? n : m;
		cout << minn * 2 - 2 << endl;
	}
	return 0;
}