// P1423 С������Ӿ
// AC 100
#include <bits/stdc++.h>
using namespace std;

double n;

int main() {
	cin >> n;
	cout << ceil(log(1 - n / 100) / log(0.98));
	return 0;
} 
