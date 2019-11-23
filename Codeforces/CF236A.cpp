//CF236A Boy or Girl

#include <bits/stdc++.h>
using namespace std;
int main(){
    set <char> uni;
    string s;
    cin >> s;
    for(int t = 0;t < s.size();t ++){
        uni.insert(s[t]);
    }
    if(uni.size() & 1){
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
}
