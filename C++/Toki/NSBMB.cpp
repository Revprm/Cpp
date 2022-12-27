#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int arr[3];
    char K;
    int temp;
    scanf("%d %d %d %c", &arr[0], &arr[1], &arr[2], &K);
    sort(arr, arr + 3);
    if (K == '0'){
        for (int i = 2; i >= 0; i--){
            printf("%d ", arr[i]);
        }
    }
    else if (K == '1'){
        for (int i = 0; i < 3; i++){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}