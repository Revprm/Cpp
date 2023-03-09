#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

int main(){
    deque <int> dq;
    int N; cin >> N;
    while (N--){
        string chk; cin >> chk;
        int x,y;
        if (chk == "add"){
            cin >> x >> y;
            while (y--){
                dq.push_back(x);
            }
            cout << dq.size() << "\n"; 
        }
        else if (chk == "del"){
            cin >> y;
            cout << dq.front() << "\n";
            while (y--){
                dq.pop_front();
            }
        }
        else if (chk == "rev"){
            reverse(dq.begin(), dq.end());
        }
    }
    return 0;
}