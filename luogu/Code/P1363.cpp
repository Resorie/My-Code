// P1363 ª√œÛ√‘π¨
// AC 100
#include <iostream>
#include <cstring>
using namespace std;
#define R register
#define For(i,a,b) for(R int i = a;i <= b;i ++)

bool suc, map[1505][1505];
int n, m, vis[1505][1505][3];
int dx[] = { 0,0,1,-1 },
	dy[] = { 1,-1,0,0 };

void dfs(int x, int y, int rx, int ry) {
	if (suc) return;
	if (vis[x][y][0] && (x != rx || y != ry)) {
		suc = true;
		//cout << "QAQ\n";
		return;
	}
	vis[x][y][0] = true;
	vis[x][y][1] = rx, vis[x][y][2] = ry;
	For(d, 0, 3) {
		int nrx = rx + dx[d],
			nry = ry + dy[d];
		int nx = (x + dx[d] + n - 1) % n + 1,
			ny = (y + dy[d] + m - 1) % m + 1;
		//cout << nx << " " << ny << '\n';
		if (map[nx][ny]) {
			//cout << "QWQ\n";
			if(vis[nx][ny][1] != nrx || vis[nx][ny][2] != nry || !vis[nx][ny])
				dfs(nx, ny, nrx, nry);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (cin >> n >> m) {
		memset(vis, false, sizeof vis);
		memset(map, false, sizeof map);
		suc = false;
		int sx, sy;
		For(i, 1, n)
			For(j, 1, m) {
				R char ch;
				cin >> ch;
				if (ch == 'S') sx = i, sy = j, map[i][j] = true;
				if (ch == '.') map[i][j] = true;
			}
		/*For(i, 1, n) {
			For(j, 1, m)
			cout << map[i][j];
			cout << endl;
		}*/
		dfs(sx, sy, sx, sy);
		if (suc) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}