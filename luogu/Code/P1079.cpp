// P1079 Vigen��re ����
// AC 100
#include <iostream>
#include <string>
using namespace std;

string k, c;

int main() {
  cin >> k >> c;
  for (int i = 0; i < c.size(); i++) {
    int t = (k[i % k.size()] & 31) - 1;
    c[i] = (c[i] & 31) - t > 0 ? c[i] - t : c[i] - t + 26;
  }
  cout << c << endl;
  system("pause");
  return 0;
}