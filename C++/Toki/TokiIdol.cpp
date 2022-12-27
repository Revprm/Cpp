#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, ttl;
    scanf("%d\n%d\n%d", &A, &B, &C);
    if (A >= 0 && A <= 100 && B >= 0 && B <= 100 && C >= 0 && C <= 100){
        ttl = A + B + C;
        if (ttl >= 200 && A >= 50 && B >= 50 && C >= 50){
            printf("Lolos");
        }
        else printf("Tidak Lolos");
    }
    return 0;
}