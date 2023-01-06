#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; scanf("%d", &N);
    char s[N]; scanf("%s", s);
    for (int i = 0; i < N; i++){
        if (s[i] != s[i + 1]) cout << s[i];
    }
    
    return 0;
}   