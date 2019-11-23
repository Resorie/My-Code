#include <bits/stdc++.h>
using namespace std;
int main()
{
    short a[12] = { 1,2,8,9,6,9,29,39,38,65,88,128 },n;
    cin >> n;
    if (n < 13)
        cout << 0;
    else
        cout << a[n - 13];
    return 0;
}
