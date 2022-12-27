#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    if (str.find("ideafuse") < str.length()){
        cout << str.find("ideafuse") + 1;
    }
    else cout << "-1";
    return 0;
}