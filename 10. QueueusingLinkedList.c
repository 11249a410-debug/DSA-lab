/*Aim: Implement queue using linked list with front and rear.

Algorithm:
Maintain front and rear.
Enqueue: create node, attach at rear, update rear.
Dequeue: remove front node, update front.
*/
Code:

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->data = x; p->next = NULL;
    if (!rear) { front = rear = p; }
    else { rear->next = p; rear = p; }
    printf("%d enqueued\n", x);
}

int dequeue() {
    if (!front) { printf("Queue underflow\n"); return -1; }
    int val = front->data;
    Node* tmp = front;
    front = front->next;
    if (!front) rear = NULL;
    free(tmp);
    return val;
}

void display() {
    if (!front) { printf("Queue empty\n"); return; }
    Node* cur = front;
    printf("Queue: ");
    while (cur) { printf("%d ", cur->data); cur = cur->next; }
    printf("\n");
}

int main() {
    enqueue(10); enqueue(20); enqueue(30);
    display();
    printf("Dequeued: %d\n", dequeue());
    display();
    return 0;
}

/*
Sample Output:

10 enqueued
20 enqueued
30 enqueued
Queue: 10 20 30 
Dequeued: 10
Queue: 20 30 


Result: Dynamic queue (no fixed capacity) with O(1) enqueue/dequeue.
Graph traversal using BFS and DFS implemented successfully.
*/
