#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string str;
    while (N--){
        int a, arr[101][101];
        cin >> str;
        a = str.size();
        for (int i = 0; i < a; i++) arr[i][i] = 1;
        for (int i = 2; i <= a; i++){
            for (int j = 0; j <= a-i; j++){
                int d = i + j - 1;
                if (str[j] == str[d]) arr[j][d]=arr[j + 1][d - 1] + 2;
                else arr[j][d] = max(arr[j + 1][d], arr[j][d - 1]);          
            }
        }
        cout << arr[0][a-1] << '\n';
    }        
    return 0;
}