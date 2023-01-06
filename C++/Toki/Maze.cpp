#include <bits/stdc++.h>
using namespace std;
int N, M, A, B, arr[202][202]; 
struct graph{
    int br, kl, ly;
};
queue <graph> g;
int al[4] = {-1, 0, 1, 0};
int nbr[4] = {0, 1, 0, -1};
bool ud[202][202];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    cin >> A >> B;
    g.push({A-1, B-1, 0});
    ud[A][B] = 1;
    while (!g.empty()){
        graph a = g.front(); g.pop();
        if (a.br == 0 || a.br == N - 1 || a.kl == 0 || a.kl == M - 1){
            cout << a.ly + 1 << endl;
            return 0;
        }
        for (int i = 0; i < 4; i++){
            int z = a.br+al[i], x = a.kl+nbr[i];
            if (!ud[z][x] && arr[z][x] != -1){
                ud[z][x] = 1;
                g.push({z, x, a.ly + 1});
            }
        }
    }
    return 0;
}
/* 
Input: 
8 10
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1
-1 0 0 0 0 0 -1 0 0 0
-1 0 0 -1 -1 0 0 0 -1 -1
-1 -1 0 0 -1 -1 -1 0 0 -1
-1 0 0 0 -1 0 -1 -1 -1 -1
-1 0 -1 0 -1 0 -1 0 0 -1
-1 0 -1 0 0 0 0 0 -1 -1
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1
7 5

Output:
17

*/