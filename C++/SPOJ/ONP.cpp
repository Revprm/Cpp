#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string s;
    cin >> N;
    while (N--){
        cin >> s;
        stack<char>sk;
        int pj = s.length();
        for (int i = 0; i < pj; i++){
            if (s[i] == '('){
                sk.push(s[i]);
            }
            else if (s[i] == ')'){
                char d = sk.top();
                sk.pop();
                sk.pop();
                cout << d;
            }
            else if (isalpha(s[i])) cout << s[i];
            else sk.push(s[i]);
        }
        cout << endl;
    }
    return 0;
}