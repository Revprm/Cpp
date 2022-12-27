#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    while (N--){
        int lgt; cin >> lgt;
        char s[lgt];
        int arr[lgt];
        int res = 0;
        for (int i = 0; i < lgt; i++){
            cin >> s[i];
            arr[i] = s[i] - 48;
        }
        if (arr[0] < arr[1] || arr[0] > arr[1]){
            res+=arr[0]+arr[1];
            cout << "+";
        }
        else{
            res +=arr[0]-arr[1];
            cout << "-";
        }
        for (int i = 2; i < lgt; i++){
            if (res < arr[i] || res > arr[i]){
                res+=arr[i];
                cout << "+";
            }
            else if (res == 0 && arr[i] == 0){
                res+=arr[i];
                cout << "+";
            }
            else{
                res-=arr[i];
                cout << "-";
            }
        }
        cout << '\n';
    }
    return 0;
}