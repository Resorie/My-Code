#include <bits/stdc++.h>
#define elif else if
using namespace std;
int a,b,c;
string s;
void getch(char &ch,int t = 1) {
	for(int i = 1; i <= t; i ++)
		ch = getchar();
}
int main() {
	cin >> s;
	for(int i = 0;i < s.size();i += 5) {
		char value = s[i + 3];
		switch(s[i]) {
			case 'a':
				if(isdigit(value)) a = value - '0';
				elif(value == 'a') a = a;
				elif(value == 'b') a = b;
				elif(value == 'c') a = c;
			case 'b':
				if(isdigit(value)) b = value - '0';
				elif(value == 'a') b = a;
				elif(value == 'c') b = b;
				elif(value == 'c') b = c;
			case 'c':
				if(isdigit(value)) c = value - '0';
				elif(value == 'a') c = a;
				elif(value == 'b') c = b;
				elif(value == 'c') c = c;
		}
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}
