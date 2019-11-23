#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

string s;
int n, cnt;

int main()
{
    int num;
    string tmp;
	cin >> tmp;
	n = tmp.size();
    s += tmp;
	for(int i = 2;i <= n;i ++) {
		cin >> tmp;
		s += tmp;
    }
    printf("%d ",n);
	for (int i = 0, cnt = 0, num = '0'; i <= s.size(); i++)
		if (num == s[i]) cnt++;
        else {
            num = s[i];
			printf("%d ", cnt);
            cnt = 1;
        }
    return 0;
}
