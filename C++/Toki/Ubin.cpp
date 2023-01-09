#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
const ll MOD = 1e9+7;

ll fr(ll em){
    FAST;
    ll x, y, z, a; 
    x = y = 1;
    z = a = 0;
    while (em > 0){
        if (em % 2 == 0){
            ll aa = y*y % MOD;
            y = (2*a*y % MOD + aa) % MOD;
            a = (a*a % MOD + aa) % MOD;
            em/=2;
        }
        else{
            ll aaa = (x*y) % MOD;
            x = (z*y % MOD + aaa + x*a % MOD) % MOD;
            z = (z*a % MOD + aaa) % MOD;
            em--;
        }
    }
    return z;
}
int main(){
    FAST;
    ll N; cin >> N;
    cout << (fr(N + 1) * fr(N + 1) % MOD) << '\n';
    return 0;
}

// ubin yang ada hanya 1x1 atau 1x2 (mungkin 2x1 bisa) 