#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B, X; cin >> N >> A >> B;
    X = A;
    float m;
    while (X % B != 0) X+=A;
    m = (X/A)+(X/B);
    cout << m;
    return 0;
}