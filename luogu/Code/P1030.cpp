// P1030 «Ûœ»–Ú≈≈¡–
// AC 100
#include <iostream>
#include <string>
using namespace std;

string in, post;

void pre(string in, string post) {
	if (!in.size()) return;
	char res = post[post.size() - 1];
	int pos = in.find(res);
	cout << res;
	string nin = in.substr(0, pos);
	string npost = in.substr(pos + 1);
	pre(in.substr(0, pos), post.substr(0, pos));
	pre(in.substr(pos + 1), post.substr(pos, in.size() - pos - 1));
}

int main() {
	cin >> in >> post;
	pre(in, post);
	cout << endl;
	return 0;
}
