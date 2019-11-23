// P1508 Likecloud-³Ô¡¢³Ô¡¢³Ô
// AC 100
#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];

int main() {
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cin >> a[i][j];
            a[i][j] += max(a[i - 1][j - 1],max(a[i - 1][j],a[i - 1][j + 1]));
        }
    }
	m /= 2;
    cout << max(a[n][m],max(a[n][m + 1],a[n][m + 2]));
    return 0;
}
