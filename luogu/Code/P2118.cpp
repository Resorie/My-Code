#include <iostream>
using namespace std;

int ans[2] = {1,1},l,n,m;

int gcd(int a,int b) {
    if(!b) return a;
    return gcd(b,a % b);
}
// gcd(i,j)==1&&i*b>=j*a&&i*ansb<j*ansa
int main() {
    cin >> n >> m >> l;
    for(int i = 1;i <= l;i ++)
        for(int j = 1;j <= l;j ++)
            if(gcd(i,j) == 1 && i * m >= j * n && ans[1] * i < ans[0] * j)
                ans[0] = i,ans[1] = j;
    cout << ans[0] << ' ' << ans[1] << endl;
    return 0;
}