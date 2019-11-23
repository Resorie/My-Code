// 1B Spreadsheets
// hack: R228C494
#include <stdio.h> 
#include <string>
#include <iostream>

using std::string;

const string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int n;
string s;

void solve1() { //RxCy -> Excel
	int x = 0,y = 0,i = 1;
	string sy = "";
	sscanf(s.c_str(),"R%dC%d",&x,&y);
	while(y) {
		sy = alpha[(y - 1) % 26] + sy;
		y /= 26;
	}
	std::cout << sy << x << '\n';
}

void solve2() { // Excel -> RxCy
	int i = 0,x = 0,y = 0;
	string sx = "";
	for(;s[i] > 64;i ++) x = x * 26 + (s[i] - 64);
	for(;i < s.size();i ++) y = (y << 1) + (y << 3) + (s[i] ^ 48);
	printf("R%dC%d\n",y,x);
}

int main() {
	scanf("%d",&n);
	for(;n;n --) {
		std::cin >> s;
		bool flag = false;
		for(register int i = 1;i < s.size();i ++)
			if(s[i - 1] < 58 && s[i] > 64) {
				flag = true;
				break;
			}
		flag ? solve1() : solve2();
	}
	return 0;
}
