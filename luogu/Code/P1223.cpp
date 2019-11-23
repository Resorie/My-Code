#include<bits/stdc++.h>
using namespace std;
struct water {
	int time,num;
} t[1005];
bool cmp(water a,water b) {
	if(a.time == b.time) return a.num < b.num;
	return a.time < b.time;
}
long long n,i,sum;
double pj;
int main() {
	cin >> n;
	for(i = 1; i <= n; i ++)
		cin >> t[i].time,t[i].num = i;
	sort(t + 1,t + n + 1,cmp);
	for(i = 1; i <= n; i ++)
		sum += t[i].time * (n - i);
	pj = sum / n;
	for(i = 1; i <= n; i ++)
		cout << t[i].num << " ";
	printf("\n%.2lf\n",pj);
	return 0;
}
