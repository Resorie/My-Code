// P1427 С���������Ϸ
// AC 100
#include <iostream>
#include <stdio.h>
#define ul unsigned long
using namespace std;

ul num, arr[105], index;

int main() {
	while (cin >> arr[++index], arr[index] != 0);
	while (index - 1) cout << arr[--index] << " ";
	cout << endl;
	return 0;
}
