#include<bits/stdc++.h>
using namespace std;

int m,i;
long long srx,n;

int main() {
    scanf("%d",&m);
    for(i = 1;i <= m;i ++) {
	scanf("%lld",&n);
    printf("%lld\n",n / 5 + n / 25 + n / 125 + n / 625 + n / 3125 + n / 15625 + n / 78125 + n / 390625 + n / 1953125 + n / 9765625 + n / 48828125 + n / 244140625);
	}
    return 0;
} 
