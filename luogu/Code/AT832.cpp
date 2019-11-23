#include <bits/stdc++.h>
using namespace std;
int a,b;
int main(){
    scanf("%d%d", & a, & b);
    if(a * a > b * b) cout << "Bug" << endl;
    else if(a * a == b * b) cout << "Draw" << endl;
    else cout << "Ant" << endl;
    return 0;
}
