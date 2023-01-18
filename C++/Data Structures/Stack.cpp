// Stack implementation using C++ stl
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <int> stck;
    int N; cin >> N;
    while (N--){
        int num; cin >> num;
        stck.push(num);

    }
    while (!stck.empty()){
        cout << stck.top() << " ";
        stck.pop();
    }
    return 0;
}