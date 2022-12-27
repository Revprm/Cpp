#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, ttl = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        ttl+=i*i;
    }
    printf("%d", ttl);
    return 0;
}