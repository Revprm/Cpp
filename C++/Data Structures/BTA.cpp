#include <bits/stdc++.h>
using namespace std;
char tree[10];

int root(char key){
    if (tree[0] != '\0') cout << "Sudah ada root" << '\n';
    else tree[0] = key;
    return 0;
}

int setLeft(char key, int parent){
    if (tree[parent] == '\0'){
        cout << "\nCan't set child at " << (parent * 2) + 1 << ", no parent found";
    }
    else tree[(parent * 2) + 1] = key;
    return 0;
}

int setRight(char key, int parent){
    if (tree[parent] == '\0'){
        cout << "\nCan't set child at " << (parent * 2) + 2 << ", no parent found";
    }
    else tree[(parent * 2) + 2] = key;
    return 0;
}

int main(){
    


    return 0;
}