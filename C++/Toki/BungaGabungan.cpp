#include <bits/stdc++.h>
using namespace std;

int main(){
    int P, Q;
    int hsl;
    scanf("%d %d", &P, &Q);
    hsl = (P*P)+(Q*Q)+1;
    if (hsl % 4 != 0) printf("-1\n");
    else if (hsl % 4 == 0) printf("%d", (hsl/4));
}