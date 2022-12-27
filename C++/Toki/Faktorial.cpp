#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int fact = 5;
    int a = 0;
    cin >> N;
    while (N >= fact){
        a+=N/fact;
        fact*=5;
    }
    cout << a << '\n';

    return 0;
}