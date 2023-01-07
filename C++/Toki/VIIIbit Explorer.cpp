#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define AND &
#define SL <<

int main(){
    int N, K, arr[20]; cin >> N >> K; ll res = 0;
    memset(arr, 0, sizeof(arr));
    for (int i = 1; i <= N; i++) for (int j = 0; j < 20; j++) if (i AND (1 SL j)) arr[j]++; 
    for (int i = 0; i < 20; i++) res += 2ll * min({K, arr[i], N - arr[i]}) * (1 SL i);
    cout << res << endl; 
    return 0;
}