#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, X, Y; cin >> N >> X >> Y;
    int res = 0, sem = N*1;
    
    for (int i = N; i > 0; i--){
        if ((N % Y) != 0){
            N--;
            res++;
        }
        else break;
    }
    res += (N / Y)*X;
    res = max(sem, res);
    cout << res;
    


    return 0;
}