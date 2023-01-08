#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, N, M; cin >> T;
    while (T--){
        cin >> N >> M;
        cout << min(N, M) * 2 << '\n';
    }
    return 0;
}