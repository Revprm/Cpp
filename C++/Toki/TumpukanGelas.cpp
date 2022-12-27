#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    if (N >= 4 && N <= 100){
        if (N % 2 == 0) printf("Tidak");
        else printf("Perlu");
    }
    return 0;
}