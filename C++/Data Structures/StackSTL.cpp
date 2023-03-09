// Stack implementation using C++ STL
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    fast;
    stack <int> s;
    int N; cin >> N;
    while (N--){
        int num; cin >> num;
        s.push(num);

    }
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}