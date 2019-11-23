//P2955 [USACO09OCT]ÆæÊıÅ¼ÊıEven? Odd?
#include <bits/stdc++.h>
using namespace std;
int n,num;
int main(){
	cin >> n;
	while(n --){
		cin >> num;
		if(num % 2) cout << "odd\n";
		else cout << "even\n";
	}
	return 0;
}
