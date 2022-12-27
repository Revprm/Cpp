#include <bits/stdc++.h>
using namespace std;

unsigned long long Mod(unsigned long long A, unsigned long long B, unsigned long long C, unsigned long long N){
    unsigned long long ans = 1;
    if (C > 1) A = Mod(A, B, C-1, N);
    while (B){
        if (B & 1) ans = (A * ans) % N;
        A = (A * A) % N;
        B >>= 1;
    }
    return ans;
}

int main(){
    int A, B, C, N;
    scanf("%d %d %d %d", &A, &B, &C, &N);
    
    if (A == 0) printf("0");
    else if (A == 1 || B == 0) printf("1");
    else if (B == 1 || C == 0) printf("%d", A % N + 1);
    else{
        printf("%lld", Mod(A, B, C, N) + 1);
    }
    return 0;
}