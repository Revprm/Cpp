#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void hapusLoop(Node*,  Node*);
int findloopn(Node* list){
	Node *a = list, *b = list;

	while (a && b && b->next) {
		a = a->next;
		b = b->next->next;

		if (a == b) {
			hapusLoop(a, list);
			return 1;
		}
	}
	return 0;
}

void hapusLoop(Node* loop_node, Node* head){
	Node* ptr1 = loop_node;
	Node* ptr2 = loop_node;

	unsigned int k = 1, i;
	while (ptr1->next != ptr2) {
		ptr1 = ptr1->next;
		k++;
	}

	ptr1 = head;
	ptr2 = head;
	for (i = 0; i < k; i++) ptr2 = ptr2->next;
	
    while (ptr2 != ptr1) {
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}

	while (ptr2->next != ptr1) ptr2 = ptr2->next;
	
    ptr2->next = NULL;
}


void printList(Node* node){
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

struct Node* newNode(int key){
	struct Node* temp = new Node();
	temp->data = key;
	temp->next = NULL;
	return temp;
}


int main(){
	Node* head = newNode(20);
	head->next = newNode(10);
	head->next->next = newNode(39);
	head->next->next->next = newNode(6);
	head->next->next->next->next = newNode(20);

	head->next->next->next->next->next = head->next->next;

	findloopn(head);

	cout << "Linked List after removing loop \n";
	printList(head);
	return 0;
}


