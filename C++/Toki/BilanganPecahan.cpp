#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    bool bisa = 0;
    scanf("%d %d", &N, &M);
    int x = min(N, M);
    for (int i = x; i > 1; i--){
        if (N % i == 0 && M % i == 0){
            printf("%d %d", N/i, M/i);   
            bisa = 1;
            break;
        }
    }
    if (bisa == 0) printf("Tidak");
    return 0;
}