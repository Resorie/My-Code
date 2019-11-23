#include <iostream>
#include <algorithm>
using namespace std;
#define register

struct node {
	int s,a;
	const bool operator < (const node& t) const {
		if(a == t.a) return s > t.s;
		return a > t.a;
	}
} house[100005];
int n,cnt;

bool cmp(int i,int dis,int num) {
	if(house[i].s == dis) return house[i].a < house[num].a;
	return house[i].s > dis;
}

int main() {
	cin >> n;
	for(register int i = 1;i <= n;i ++) cin >> house[i].s;
	for(register int i = 1;i <= n;i ++) cin >> house[i].a;
	sort(house + 1,house + n + 1);
	for(register int i = 1;i <= n;i ++)
		cnt = max(cnt,house[i].a + house[i].s * 2);
	cout << cnt << endl;
	for(register int x = 2;x <= n;x ++) {
		int cnt1 = 0,cnt2 = 0,dis = 0,num = 1,rep = x;
		for(register int i = 1;i <= x;i ++) {
			dis = max(dis,house[i].s);
			cnt1 += house[i].a;
		}
		cnt1 += dis * 2;
		dis = 0;
		for(register int i = 1;i <= n;i ++)
			if(cmp(i,dis,num)) {
				dis = house[i].s;
				num = i;
			}
		cnt2 += house[num].a;
		for(register int i = 1;i < rep;i ++) {
			if(i == num) rep ++;
			else cnt2 += house[i].a;
		}
		cnt2 += dis * 2;
		cout << max(cnt1,cnt2) << endl;
	}
	return 0;
}
