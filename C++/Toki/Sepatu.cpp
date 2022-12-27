#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, count = 0;
    scanf("%d %d", &N, &M);
    int arr1[N], arr2[M];
    for (int i = 0; i < N; i++){
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < M; i++){
        scanf("%d", &arr2[i]);
    }
    sort(arr1, arr1 + N);
    sort(arr2, arr2 + M);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (arr1[i] == arr2[j] || arr1[i] + 1 == arr2[j]){
                count++;
                arr2[j] = 0;
                break;
            }
        }
    }
    printf("%d", count);


    return 0;
}