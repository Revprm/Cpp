#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int ad = 0;
    stack <int> s;
    int n; cin >> n;
    while (n--){
        string chk; cin >> chk;
        int x, y;
        if (chk == "add"){
            cin >> x >> y;
            while (y--) s.push(x - ad);
            cout << s.size() << "\n";
        }
        else if (chk == "del"){
            cin >> y;
            cout << s.top() + ad << "\n";
            while (y--) s.pop();
        }
        else if (chk == "adx"){
            cin >> y;ad+=y;
        }
        else if (chk == "dex"){
            cin >> y; ad-=y;
        }
    }
    return 0;
}