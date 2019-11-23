// P1100 ¸ßµÍÎ»½»»»
// AC 100
#include<iostream>
using namespace std;

int n;

int main()
{
	cin >> n;
	cout << ((n & 0x0000ffff) << 16 | (n & 0xffff0000) >> 16) << endl;
}