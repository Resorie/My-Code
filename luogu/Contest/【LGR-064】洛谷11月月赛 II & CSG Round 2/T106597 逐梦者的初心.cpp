#include <cstdio>
#include <deque>

using std::deque;

deque < int > dq;
int n,m,s[1000005],cnt[1000005];

int main() {
#ifndef ONLINE_JUDGE
	freopen("test.in","r",stdin);
#endif
	scanf("%d%d",&n,&m);
	for(register int i = 0; i < n; i ++) scanf("%d",s + i);
	for(register int i = 1; i <= m; i ++) {
		register int opt,ch,suc,l;
		scanf("%d%d",&opt,&ch);
		if(opt) dq.push_front(ch);
		else dq.push_back(ch);
		suc = 1;
		if(i == 1) {
			cnt[1] = dq[0] != s[0];
			printf("%d\n",cnt[1]);
			continue;
		}
		if(opt) {
			l = 0;
			for(int j = 0; j <= l; j ++)
				if(dq[dq.size() - l + j] == s[j]) {
					suc = false;
					break;
				}
			cnt[i] = cnt[i - 1] + suc;
		} else {
			for(register int l = 0; l < dq.size(); l ++) {
				for(int j = 0; j <= l; j ++)
					if(dq[dq.size() - l + j - 1] == s[j]) {
						suc = false;
						break;
					}
				cnt[i] += suc; 
			}
		}
		printf("%d\n",cnt[i]);
	}
	return 0;
}
