// P1478 ÌÕÌÕÕªÆ»¹û£¨Éý¼¶°æ£©
// AC 100
#include <iostream>
using namespace std;
#define max(a, b) (a) > (b) ? (a) : (b)
#define QAQ cout << "QAQ";

int opt[1005], n, s, a, b, w, h;

int main() {
	cin >> n >> s >> a >> b;
	a += b;
	for (int i = 1; i <= n; i++) {
		cin >> h >> w;
		for (int j = s; j >= w; j--)
			if (a >= h) opt[j] = max(opt[j], opt[j - w] + 1);
	}
	cout << opt[s] << endl;
	return 0;
	QAQ
}