#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    int ttl = 0;
    scanf("%d %d", &A, &B);
    if (A != B){
        printf("0");
    }
    else{
        while (A == B){
            A++;
            ttl++;
        }
        printf("%d", ttl);
    }
    return 0;
}