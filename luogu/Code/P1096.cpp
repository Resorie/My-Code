// P1096 Hanoi Ë«ËşÎÊÌâ
// AC 100
#include <bits/stdc++.h>
using namespace std;

int n;
stringstream stio;
string s;

int main()
{
    cin >> n;
    stio.precision(0);
    stio << fixed << pow(2.0L,++ n);
    s = stio.str();
    s[s.length() - 1] -= 2;
    cout << s << endl;
    return 0;
}
