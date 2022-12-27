#include <bits/stdc++.h>
using namespace std;

int main(){
    long long M;
    float temp;
    long long hsl;
    scanf("%lld", &M);
    temp = sqrt(M);
    hsl = sqrt(M);
    if (temp != hsl){
        printf("0");
    }
    else{
        printf("%lld", hsl);
    }
    return 0;
}