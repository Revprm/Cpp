#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, m, k; cin >> n >> m >> k;
        int a = 0;
        for (int i = 0; i < m; i++){
            int b; cin >> b;
            if(b == (n + k  - 1) / k) a++;
            if(b > (n + k  - 1) / k) a = 1 << 30;
        }
        if (a <= (n - 1) % k + 1) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}