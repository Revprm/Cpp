#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    bool A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J = 0;
    int a, b, c, d, e, f, g, h, i, j;
    while (N != 0){
        if (N >= 1000){
            a = N / 1000;
            N = N % 1000;
            A = 1;
        }
        else if (N>=500 && N < 1000){
            b = N / 500;
            N = N % 500;
            B = 1;
        }
        else if (N>=200 && N < 500){
            c = N / 200;
            N = N % 200;
            C = 1;
        }
        else if (N>=100 && N < 200){
            d = N / 100;
            N = N % 100;
            D = 1;
        }
        else if (N>=50 && N < 100){
            e = N / 50;
            N = N % 50;
            E = 1;
        }
        else if (N>=20 && N < 50){
            f = N / 20;
            N = N % 20;
            F = 1;
        }
        else if (N>=10 && N < 20){
            g = N / 10;
            N = N % 10;
            G = 1;
        }
        else if (N>=5 && N < 10){
            h = N / 5;
            N = N % 5;
            H = 1;
        }
        else if (N>=2 && N < 5){
            i = N / 2;
            N = N % 2;
            I = 1;
        }
        else{
            j = N / 1;
            N = N % 1;
            J = 1;
        }
    }
    if (A == 1) cout << "1000 " << a << '\n';
    if (B == 1) cout << "500 " << b << '\n';
    if (C == 1) cout << "200 " << c << '\n';
    if (D == 1) cout << "100 " << d << '\n';
    if (E == 1) cout << "50 " << e << '\n';
    if (F == 1) cout << "20 " << f << '\n';
    if (G == 1) cout << "10 " << g << '\n';
    if (H == 1) cout << "5 " << h << '\n';
    if (I == 1) cout << "2 " << i << '\n';
    if (J == 1) cout << "1 " << j << '\n';

    return 0;
}