#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
};

void push(node** ref_head, int data_baru){
    node* node_baru = new node();
    node_baru->data = data_baru;
    node_baru->next = (*ref_head);
    (*ref_head) = node_baru;
}

int count(node* head){
    int ttl = 0;
    node* curr = head;
    while (curr != NULL){
        ttl++;
        curr = curr->next;
    }
    return ttl;   
}

int main(){
    node* head = NULL;
    int num;
    while (scanf("%d", &num) != EOF){
        if (num < 0){
            break;
        }
        push(&head, num);
    }
    cout << "Jumlah nodenya adalah: " << count(head);
    return 0;
}