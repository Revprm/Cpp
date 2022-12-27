#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    while (N--){
        int A, B, L, res = 0; cin >> A >> B >> L;
        if (L >= 2000){
            res = (L-2000) * B/100;
            cout << res + A << '\n';
        }
        else cout << A << '\n';
    }
    return 0;
}