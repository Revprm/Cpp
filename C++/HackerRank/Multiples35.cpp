#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    n = n-1;
    long a3=n/3,a5=n/5,a15=n/15;
    long b3=3*(a3*(a3+1)/2);
    long b5=5*(a5*(a5+1)/2);
    long b15=15*(a15*(a15+1)/2);
    long res;
    res = b3 + b5 - b15;
    cout<< res << endl;
    return 0;
}