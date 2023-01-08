#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, a = 0, b = 0; cin >> N;
    int arr1[N], arr2[N];
    for (int i = 0; i < N; i++) cin >> arr1[i];
    for (int i = 0; i < N; i++) cin >> arr2[i];
    while (a < N && b < N){
        if (arr1[a] == arr2[b]) b++;    
        else a++;
    }
    if (b == N) cout << "YES";
    else cout << "NO";

    return 0;
}