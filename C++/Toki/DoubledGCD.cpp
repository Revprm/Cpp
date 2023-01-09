#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)

int main(){
    FAST;
    int N, gcdl = 0; cin >> N;
    vector <int> ipd(N);
    For(i, N){
        cin >> ipd[i];
        gcdl = __gcd(gcdl, ipd[i]);
    }
    priority_queue<int, vector<int>, greater<int>> p;
    For(i, N){
        int z = 0;
        ipd[i] /= gcdl;
        while (!(ipd[i] & 1)){
            z++;
            ipd[i] /= 2;
        }
        p.push(z);
    }
    while (p.size() > 1){
        int x = p.top();
        p.pop();
        int y = p.top();
        p.pop();
        p.push(min(x, y) + 1);
    }
    cout << (ll) pow(2, p.top()) * gcdl << '\n';
    return 0;
}