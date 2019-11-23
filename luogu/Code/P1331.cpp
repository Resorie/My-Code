#include <bits/stdc++.h>
using namespace std;
int r,c,i,j,s;
int dx[4] = {- 1,1,0,0},dy[4] = {0,0,-1,1};
char place[1005][1005];
bool used[1005][1005];
bool forbid(char a,char b,char c,char d) {
	if(a == '.' && b == '#' && c == '#' && d == '#') return 1;
	if(a == '#' && b == '.' && c == '#' && d == '#') return 1;
	if(a == '#' && b == '#' && c == '.' && d == '#') return 1;
	if(a == '#' && b == '#' && c == '#' && d == '.') return 1;
	return 0;
}
void dfs(int i,int j) {
	for(int k = 0; k < 4; k ++)
		if(!used[i + dx[k]][j + dy[k]] && place[i + dx[k]][j + dy[k]] == '#') {
			used[i + dx[k]][j + dy[k]] = true;
			dfs(i + dx[k],j + dy[k]);
		}
}
int main() {
	cin >> r >> c;
	for(i = 1; i <= r; i ++)
		for(j = 1; j <= c; j ++)
			cin >> place[i][j];

	for(i = 1; i <= r; i ++)
		for(j = 1; j <= c; j ++)
			if(forbid(place[i][j],place[i + 1][j],place[i][j + 1],place[i + 1][j + 1])) {
				cout << "Bad placement.\n";
				return 0;
			}

	for(i = 1; i <= r; i ++)
	for(j = 1;j <= c;j ++) 
		if(!used[i][j] && place[i][j] == '#') {
			s ++;
			used[i][j] = true;
			dfs(i,j);
		}
	printf("There are %d ships.\n",s);
	return 0;
}
