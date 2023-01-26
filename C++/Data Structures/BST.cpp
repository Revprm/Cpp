#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

// function untuk membuat node baru dan menambahkan data
Node* getnewNode(int data){
    Node* newNode = new Node(); // (new) merupakan sintaks khusus dalam C++
                                // jika ingin menggunakan C, maka akan menggunakan malloc
                                // seperti berikut
                                // (Node*) malloc(sizeof(Node));
    newNode->data = data; // mengisi data pada node dengan data yang akan dimasukkan
    newNode->left = newNode->right = NULL; // menganggap anak kiri dan anak kanan sebagai NULL
    return newNode;
}

// function untuk insert data atau menambahkan data
Node* Insert(Node* root, int data){
    if (root == NULL){ // apabila root tidak memiliki nilai, maka akan dibuat root baru
        root = getnewNode(data);
    }
    else if (data <= root->data){ // apabila data memiliki nilai kurang dari atau sama dengan root
                                  // maka data akan dimasukkan ke data untuk anak kiri
        root->left = Insert(root->left, data);
    }
    else if (data > root->data){ // apabila data memiliki nilai lebih dari root
                                 // maka data akan dimasukkan ke data untuk anak kanan
        root->right = Insert(root->right, data);
    }
    return root;
}


bool search(Node* root, int data){
    if (root == NULL) return false;
    else if (root->data == data) return true;
    else if (data <= root->data) return search(root->left, data);
    else if (data > root->data) return search(root->right, data);  
    else return search(root->right, data);
}

int main(){
    Node* root = NULL; // menganggap root tidak memiliki nilai atau NULL
    root = Insert(root, 15);
    root = Insert(root, 25);
    root = Insert(root, 10);
    root = Insert(root, 30);
    root = Insert(root, 11);
    root = Insert(root, 12);
    root = Insert(root, 27);
    
    int N; 
    cout << "Angka yang ingin dicari> "; cin >> N;
    if (search(root, N) == true) cout << N << " ditemukan\n";
    else cout << N << " tidak ditemukan\n";
    
    return 0;
}