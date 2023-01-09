#include <bits/stdc++.h>
using namespace std;

string teksAsterisk, inputTeks;
int N;
int main(){
    cin >> teksAsterisk >> N;
    int asterisk = teksAsterisk.find("*");
    for (int i = 0; i < N; i++){
        cin >> inputTeks;
        if (teksAsterisk.length() - 1 > inputTeks.length()) continue;
        string subAsterisk = teksAsterisk.substr(0, asterisk);
        string belakangAsterisk = teksAsterisk.substr(asterisk + 1);
        string subInputTeks = inputTeks.substr(0, asterisk);
        string belakangInputTeks = inputTeks.substr(inputTeks.length() - belakangAsterisk.length());
        if (subAsterisk == subInputTeks && belakangAsterisk == belakangInputTeks){
            cout << inputTeks << endl;
        }
    }
    
    return 0;
}