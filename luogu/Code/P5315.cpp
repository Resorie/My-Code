#include <iostream>
#include <cstdio>
using namespace std;

int n, l, g, w, h;

int main() {
	cin >> n >> l >> g;
	while (n--) {
		cin >> w >> h;
		while (w > g || h > g) w /= 2, h /= 2;
		if (w < l || h < l) printf("Too Young\n");
		else if (w != h) printf("Too Simple\n");
		else printf("Sometimes Naive\n");
	}
	return 0;
}