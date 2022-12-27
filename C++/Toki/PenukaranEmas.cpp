#include <bits/stdc++.h>
using namespace std;

int hsl(int x){
    if (x <= 2) return x;
    else{
        int a = x/2;
        int b = x/3;
        int c = x/4;
        int ttl_a;
        int ttl = hsl(a) + hsl(b) + hsl(c);
        ttl_a = max(x, ttl);
        return ttl_a;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d", hsl(N));
    return 0;
}