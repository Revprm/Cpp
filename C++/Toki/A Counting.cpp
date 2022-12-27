#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, X, Y;
    scanf("%d", &N);
    for (int k = 1; k <= N; k++){
        bool a = 0, b = 0;
        scanf("%d %d", &X, &Y);
        while (X<Y){
            X+=7;
            Y-=5;
        }
        if (X == Y) printf("Case #%d: %d", k, X);
        else printf("Case #%d: impossible", k);
        printf("\n");
    }
    return 0;
}