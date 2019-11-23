#include <bits/stdc++.h>
using namespace std;
long long rem[100005];
int n;
long long m(int s)
{
    if(rem[s] != - 1) return rem[s];
    long long ans = 1;
    for(int i = 1;i <= s / 2;i ++)
    ans += m(i);
    rem[s] = ans;
    return ans; 
}
int main()
{
    scanf("%d",& n);
    for(int i = 1;i <= n;i ++)
    rem[i] = - 1;
    rem[1] = 1;
    return ! printf("%lld",m(n));
}
