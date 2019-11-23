// luogu-judger-enable-o2
//P1087 FBIÊ÷
#include <bits/stdc++.h>
#define elif else if
using namespace std;
string tree;
int n;
void make_tree(int lft,int rgt){
//	cout << lft << " " << rgt << endl;
    int mid = (lft + rgt) / 2;
    if(lft < rgt){
        make_tree(lft,mid);
        make_tree(mid + 1,rgt);
    }
    bool B = 1,I = 1;
    for(int i = lft;i <= rgt;i ++)
        if(tree[i] == '0') I = 0;
        elif(tree[i] == '1') B = 0;
    if(B) cout << "B";
    elif(I) cout << "I";
    else cout << "F";
}
int main(){
    cin >> n;
    getline(cin,tree);
    getline(cin,tree);
    tree.insert(0," ",0,1);
    make_tree(1,tree.size() - 1);
    return 0;
} 
