#include <iostream>
#include <algorithm>
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
using namespace std;


int main(){
    Fast
    ll n; cin >> n;
    ll ttl = 0, height[n], ans[n];
    for (ll i = 0; i < n; i++){
        cin >> height[i];
        ans[i] = 1;
        for (ll j = i - 1; j >= 0; j--){
            if (height[i] >= height[j]){
                ans[i]+=ans[j];
                j-=ans[j]-1;
            }
            else break;
        }
        ttl+=ans[i];
    }
    cout << ttl << endl;
    return 0;
}