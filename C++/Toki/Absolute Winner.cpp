#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, a; cin >> A >> B >> C;
    a = (A+B+C) / 7;
    a *=4;
    if (A == a || B == a || C == a) cout << "YA";
    else cout << "TIDAK";   
    return 0;
}