#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll N, M, res = 10e9; cin >> N >> M;
    ll arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    for (int i = 0; i <= N-M; i++) res = min(res, (arr[i + M - 1] - arr[i]));
    cout << res;
    return 0;
}