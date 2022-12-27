#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    scanf("%d\n%d\n%d", &arr[0], &arr[1], &arr[2]);
    sort(arr, arr + 3);
    printf("%d\n%d\n%d", arr[0], arr[2], arr[1]);
    return 0;
}