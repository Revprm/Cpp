// Queue Implementation in C++ without using STL
#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
    int front, rear, size;
    unsigned cap;
    int* arr;
};

Queue* createQueue(unsigned cap){
    Queue* queue = new Queue();
    queue->cap = cap;
    queue->front = queue->size = 0;

    queue->rear = cap - 1;
    queue->arr = new int[(queue->cap * sizeof(int))];
    return queue;
}

int isFull(Queue* queue){
    return (queue->size == queue->cap);
}

int isEmpty(Queue* queue){
    return (queue->size == 0);
}

void enqueue(Queue* queue, int item){
    if (isFull(queue)) return;
    queue->rear = (queue->rear + 1) % queue->cap;
    queue->arr[queue->rear] = item;
    queue->size++;
    cout << item << " telah ditambahkan\n";
}

int dequeue(Queue* queue){
    if (isEmpty(queue)) return INT_MIN;
    int item = queue->arr[queue->front];
    queue->front = (queue->front + 1) % queue->cap;
}

int front(Queue* queue){
    if (isEmpty(queue)) return INT_MIN;
    return queue->arr[queue->front];
}

int rear(Queue* queue){
    if (isEmpty(queue)) return INT_MIN;
    return queue->arr[queue->rear];
}

void printQueue(Queue* queue) {
	if (isEmpty(queue)) {   
    cout << "Antrian kosong" << endl;
	}
	else {
		cout << "Queue      : ";
		for (int i = queue->front; i < queue->size; i++){
			cout << queue->arr[i] << ((queue->size-1 == i) ? "" : ",");
        }
		cout << endl;
  }
}
int main(){
    Queue* queue = createQueue(5);
    enqueue(queue, 20);
    enqueue(queue, 19);
    enqueue(queue, 38);
    enqueue(queue, 17);
    enqueue(queue, 35);
    // antrian awal sebelum ada yang di dequeue
    printQueue(queue);
    cout << "Front queue: " << front(queue) << endl;
    cout << "rear queue : " << rear(queue) << endl;
    // kita hapus 2 angka dari queue
    dequeue(queue);
    dequeue(queue);
    // antrian setelah dequeue 2 angka
    printQueue(queue);
}