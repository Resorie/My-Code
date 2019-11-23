#include <bits/stdc++.h>
using namespace std;
int a,b;
int main() {
	scanf("%d%d" , & a, & b);
	if(b % a == 0) printf("%d",b / a);
	else printf("%d/n",b / a + 1);
	return 0;
}
