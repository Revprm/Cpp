#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node (int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinaryTree{
    public:
    Node* root;
    
    BinaryTree(){
        root = nullptr;
    }

    void addNode(int data){
        Node* newNode = new Node(data);

        if (root == nullptr) root = newNode;
        else{
            Node* focusNode = root;
            Node* parent;

            while (true){
                parent = focusNode;

                if (data < focusNode->data){
                    focusNode = focusNode->left;
                    if (focusNode == nullptr){
                        parent->left = newNode;
                        return;
                    }
                }
                else{
                    focusNode = focusNode->right;
                    if (focusNode == nullptr){
                        parent->right = newNode;
                        return;
                    }
                }
            }
        }
    }

    void PreOrderTransversal(Node* focusNode){
        if (focusNode != nullptr){
            cout << focusNode->data << " ";
            PreOrderTransversal(focusNode->left);
            PreOrderTransversal(focusNode->right);
        }
    }
};

int main(){
    BinaryTree tree;
    tree.addNode(50);
    tree.addNode(75);
    tree.addNode(25);
    tree.addNode(19);
    tree.addNode(68);
    tree.addNode(39);
    tree.addNode(102);

    tree.PreOrderTransversal(tree.root);

    return 0;
}