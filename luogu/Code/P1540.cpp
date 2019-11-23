// P1540 ЛњЦїЗ­вы
// 
#include <iostream>
#include <queue>
using namespace std;

int m, ans, n;
bool dict[1005];
queue < int > q;

int main() {
	cin >> m >> n;
	for (int i = 1; i <= n; i++) {
		register int word;
		cin >> word;
		if (dict[word]) continue;
		ans++;
		dict[word] = true;
		q.push(word);
		if (q.size() > m) dict[q.front()] = false, q.pop();
	}
	cout << ans << endl;
	return 0;
}