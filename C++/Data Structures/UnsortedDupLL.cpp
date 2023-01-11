// Removing duplicates from an unsorted Linked List
#include <bits/stdc++.h>
using namespace std;

/* approach pertama: 
struct node {
    int data;
    node* next;
};

struct node* newNode (int data){
    node* temp = new node;
    temp->data = data;
    temp->next = NULL;
    return temp;
};

void removeDup(node* awal){
    node *ptr1, *ptr2, *dup;
    ptr1 = awal;

    while (ptr1 != NULL && ptr1->next != NULL){
        ptr2 = ptr1;
        while (ptr2->next != NULL){
            if (ptr1->data == ptr2->next->data){
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }   
            else ptr2 = ptr2->next;    
        }
        ptr1 = ptr1->next;
    }
}

void printll(node* node){
    while (node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
    
}

int main(){

    // urutan data -> 7-20-34-12-34-20
    node* awal = newNode(7);
    awal->next = newNode(20);
    awal->next->next = newNode(34);
    awal->next->next->next = newNode(12);
    awal->next->next->next->next = newNode(34);
    awal->next->next->next->next->next = newNode(20);
    
    cout << "urutan linked list sebelum diubah: ";
    printll(awal);
    cout << '\n';
    
    removeDup(awal);
    cout << "urutan linked list setelah diubah: ";
    printll(awal);

    return 0;
}
*/

// using hashing: 
struct node {
    int data;
    node* next;
};

struct node* newNode (int data){
    node* temp = new node;
    temp->data = data;
    temp->next = NULL;
    return temp;
};

void removeDup(node* awal){
    unordered_set <int> sset;

    node* curr = awal;
    node* prev = NULL;
    while (curr != NULL){
        if (sset.find(curr->data) != sset.end()){
            prev->next = curr->next;
            delete (curr);
        }
        else{
            sset.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
}

void printll(node* node){
    while (node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
    
}

int main(){

    // urutan data -> 7-20-34-12-34-20
    node* awal = newNode(7);
    awal->next = newNode(20);
    awal->next->next = newNode(34);
    awal->next->next->next = newNode(12);
    awal->next->next->next->next = newNode(34);
    awal->next->next->next->next->next = newNode(20);
    
    cout << "urutan linked list sebelum diubah: ";
    printll(awal);
    cout << '\n';
    
    removeDup(awal);
    cout << "urutan linked list setelah diubah: ";
    printll(awal);

    return 0;
}
