#include <bits/stdc++.h>
using namespace std;

int main(){
    int K, A;
    char C;
    scanf("%d %c %d", &K, &C, &A);
    for (int i = 1; i <= K; i++){
        for (int j = 1; j <= K; j++){
            if (i == j) printf("%d", A);
            else if ((i + j) == K + 1) printf("%d", A);
            else printf("%c", C);   
        }
        printf("\n");
    }
    

    return 0;
}