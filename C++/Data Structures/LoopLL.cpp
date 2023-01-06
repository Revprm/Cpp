#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void push(node** ref_head, int data_baru){
    node* node_baru = new node();
    node_baru->data = data_baru;
    node_baru->next = (*ref_head);
    (*ref_head) = node_baru;
}

bool loop(node* head){
    unordered_set <node*> s;
    while (head != NULL){
        if (s.find(head) != s.end()) return true;
        s.insert(head);
        head = head->next;
    }
    return false;
}

int main(){  
    node* head = NULL;

    push(&head, 10);
    push(&head, 14);
    push(&head, 19);
    push(&head, 24);
    push(&head, 30);
    push(&head, 10);
    
    head->next->next->next->next->next->next = head;
    
    if (loop(head)) cout << "Ada Looping" << '\n';
    else cout << "Tidak Ada Looping" << '\n';
    
    return 0;
}