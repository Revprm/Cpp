#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, X = 0, Y = 0;
    scanf("%d %d", &A, &B);
    while (A != 0){
        X+=A%10;
        A/=10;
    }
    while (B != 0){
        Y+=B%10;
        B/=10;
    }
    printf("%d", X*Y);

    return 0;
}