// P1722 æÿ’Û II
// AC 100
#include <iostream>
#include <stdio.h>
using namespace std;

int C[105];
int n;

int main()
{
	C[0] = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 0; j < i; j++)
			C[i] = (C[i] + C[j] * C[i - 1 - j]) % 100;
	cout << C[n] << endl;
	return 0;
}