#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n], a = 0, b = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == 1) a++;
        else if (arr[i] == 0) b++;
    }
    cout << a << " " << b;
    return 0;
}