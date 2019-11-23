#include <bits/stdc++.h>
using namespace std;

int n,m,v[30],p[30],opt[30][30005];

int main() {
    cin >> n >> m;
    for(int i = 1;i <= m;i ++) {
        cin >> v[i] >> p[i];
        p[i] *= v[i];
    }
    for(int i = 1;i <= m;i ++)
    for(int j = 1;j <= n;j ++) {
        opt[i][j] = opt[i - 1][j];
        if(j >= v[i]) opt[i][j] = max(opt[i][j],opt[i - 1][j - v[i]] + p[i]);
    }
    cout << opt[m][n] << endl;
    return 0;
}