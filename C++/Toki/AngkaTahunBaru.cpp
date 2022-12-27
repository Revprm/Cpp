#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    if (N < 7 && N == 2 || N == 3 || N == 5){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}