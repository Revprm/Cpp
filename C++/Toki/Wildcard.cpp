#include <bits/stdc++.h>
using namespace std;

int main(){
    string fst; cin >> fst;
    int locAst = fst.find("*");
    int N; cin >> N;
    while (N--){
        string str; cin >> str;
        if (fst.length() - 1 > str.length()) continue;
        string awal1 = fst.substr(0, locAst);
        string blkng1 = fst.substr(locAst + 1);
        string awal2 = str.substr(0, locAst);
        string blkng2 = str.substr(str.length() - blkng1.length());
        if (awal1 == awal2 && blkng1 == blkng2) cout << str << '\n';
    }
    return 0;
}