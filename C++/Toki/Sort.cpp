#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll N; scanf("%lld", &N);
    ll arr[N];
    for (int i = 0; i < N; i++){
        scanf("%lld", &arr[i]);
    }
    sort(arr, arr + N);
    for (int i = 0; i < N; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}