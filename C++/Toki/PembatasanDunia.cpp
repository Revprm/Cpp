#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, X, N, M;
    scanf("%d %d", &A, &X);
    N = X / A;
    M = X % A;
    printf("%d %d", N, M);
    return 0;
}