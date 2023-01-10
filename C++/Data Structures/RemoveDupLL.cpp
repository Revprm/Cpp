// removing duplicates using linked list for sorted data

#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void removeDup(node* head){
    node* curr = head;
    node* next_tmp;
    if (curr == NULL) return;
    while (curr->next != NULL){
        if (curr->data == curr->next->data){
            next_tmp = curr->next->next;
            free(curr->next);
            curr->next = next_tmp;
        }
        else curr = curr->next;   
    }   
}

void push(node** ref_head, int data_baru){
    node* node_baru = new node();
    node_baru->data = data_baru;
    node_baru->next = (*ref_head);
    (*ref_head) = node_baru;
}

void printl(node* node){
    while (node != NULL){
        cout << " " << node->data;
        node = node->next;
    }
}

int main(){
    node* head = NULL;

    push(&head, 100);
    push(&head, 89);
    push(&head, 89);
    push(&head, 35);
    push(&head, 35);
    push(&head, 1);
    push(&head, 1);
    cout << "list data sebelum diubah: ";
    printl(head); cout << '\n';
    removeDup(head);
    cout << "list data setelah diubah: ";
    printl(head);

    return 0;
}