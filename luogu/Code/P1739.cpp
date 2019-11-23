#include <iostream>
#include <stack>
using namespace std;

char c;
int cnt; // 记录栈中还有多少元素 

int main() {
	while (c = getchar(),c != '@') {
		if (c == '(') cnt ++; // 入栈
		if (c == ')') {
			if (cnt) // 还有
				cnt--; // 出栈
			else cout << "N0\n", exit(0);
		} 
	}
	if (!cnt) cout << "YES\n";
	else cout << "N0\n";
	return 0;
}
