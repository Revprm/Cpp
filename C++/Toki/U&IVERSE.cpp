#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int X, Y;
    bool a = 0, b = 0;
    while (N--){
        scanf("%d %d", &X, &Y);
        if((X + Y) & 1) a = 1;
        if(!((X+Y) & 1)) b = 1;
    }
    if(a & b) printf("YES");
    else printf("NO");
    
    return 0;
}