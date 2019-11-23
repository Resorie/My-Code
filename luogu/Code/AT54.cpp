// AT54 ∏Ó§Í«–§Ï§Î»’∏∂
// AC 100 
#include <bits/stdc++.h>
using namespace std;

int y,m,d;
int date[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isleap(int year) {
	return ((year % 100 && !(y % 4)) || !(y % 400));
}

int main() {
	scanf("%d/%d/%d",&y,&m,&d);
	if(isleap(y)) date[2] ++;
	while(y % (m * d)) {
		d ++;
		if(d > date[m]) {
			d = 1;
			m ++;
		}
		if(m > 12) {
			m = 1;
			y ++;
		}
	}
	printf("%d/%02d/%02d\n",y,m,d);
	return 0;
}
