#include <bits/stdc++.h>
using namespace std;
int n;
string a[2] = {"No","Yes"};
int main()
{
	cin >> n;
	cout << a[((n / 100 % 10) == n % 10)] << endl;
}
