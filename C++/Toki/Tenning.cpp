#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    int a;
    bool ada = 0;
    while (N != 0){
        a = N % 10;
        N/=10;
        if (a == 0){
            cout << "YES" << '\n';
            ada = 1;
            break;
        }
        else continue;
        
    }
    if (ada == 0) cout << "NO" << '\n';
    return 0;
}