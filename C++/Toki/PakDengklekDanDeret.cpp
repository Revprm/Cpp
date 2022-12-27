#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    for (int i = 1; i <= N; i++){
        cout << i;
        if (i == N) break;
        cout << "+";
    }
    return 0;
}