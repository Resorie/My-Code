#include <iostream>
#include <stack>
using namespace std;

char c;
int cnt; // ��¼ջ�л��ж���Ԫ�� 

int main() {
	while (c = getchar(),c != '@') {
		if (c == '(') cnt ++; // ��ջ
		if (c == ')') {
			if (cnt) // ����
				cnt--; // ��ջ
			else cout << "N0\n", exit(0);
		} 
	}
	if (!cnt) cout << "YES\n";
	else cout << "N0\n";
	return 0;
}
