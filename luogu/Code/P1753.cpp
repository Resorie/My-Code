#include<iostream>
#include<cstdio>
#define ll long long
#define mod 1000007ll
using namespace std;
ll n, ans;
int main()
{
	scanf("%lld", &n);
	ll to;
	for (ll i = 1; i <= n; ++i)
	{
		if ((i + 1) * i >= 2 * n) { to = i - 1; break; }
	}
	//get to������������������ͬ��
	ll last = 1;
	for (ll i = 1; i <= to; ++i)
	{
		ll it = i * last;
		it %= mod;
		ans += it;
		ans %= mod;
		last *= 2; last %= mod;
	}
	//�ۺ�
	ll need = 2 * n - to * to - to;
	need /= 2;
	//���ʣ����
	ans += 1ll * (need * last) % mod;
	//�ۺ�
	ans %= mod;
	cout << ans << endl;
}