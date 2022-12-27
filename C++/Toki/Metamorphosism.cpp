#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll A, B, C, D, E, F, X, Y, Z;
    ll a = 0, b = 0;
    scanf("%lld %lld %lld\n%lld %lld %lld", &A, &B, &C, &D, &E, &F);
    X = abs(A-D);
    Y = abs(B-E);
    Z = abs(C-F);
    if (X & 1) a++;
    else b++;
    if (Y & 1) a++;
    else b++;
    if(Z & 1) a++;
    else b++;

    if (a == 3 || b == 3) printf("0");
    else printf("1");

    return 0;
}