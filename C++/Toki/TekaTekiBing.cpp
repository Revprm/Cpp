#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        bool ada = 0;
        for (int j = 1; j <= N; j++){
            if (i*j == N){
                printf("%d %d", i, j);
                ada = 1;
                break;
            }
        }
        if (ada == 1) break;
    }
    return 0;
}