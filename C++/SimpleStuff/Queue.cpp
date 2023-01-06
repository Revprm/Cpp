// Queue Implementation using standard library of c++.
#include <bits/stdc++.h>
using namespace std;

void ShowQ (queue <int> sQ){
    queue <int> s = sQ;
    while (!s.empty()){
        cout << s.front() << " ";
        s.pop();
    }
    cout << '\n';
}
int main(){
    queue <int> Q;
    int N; cin >> N;
    while (N--){
        int num; cin >> num;
        Q.push(num);
    }
    cout << "The Queue is> ";
    ShowQ(Q);

    cout << "Size of the Queue: " << Q.size();
    cout << "\nThe front of the Queue: " << Q.front();
    cout << "\nThe back of the Queue: " << Q.back();
    cout << '\n';

    return 0;
}