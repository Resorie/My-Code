//CF802G Fake News (easy)
#include <bits/stdc++.h>
using namespace std;
string s,need = "heidi";
int  i,n;
int main(){
	cin >> s;
	for(i = 1;i < s.size();i ++){
		if(s[i] == need[n]) n ++;
		if(n == 5){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}
