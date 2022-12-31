#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*int main(){
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
*/
int main(){
    int N, V; scanf("%d", &N);
    short arr[1001] = {0};
    for (int i = 0; i < N; i++){
        scanf("%d", &V);
        arr[V]++;
    }
    for (int i = 0; i < 1001; i++){
        while (arr[i] > 0){
            printf("%d\n", i);
            arr[i]--;
        }   
    }
    return 0;
}