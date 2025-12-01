//*Aim:
To implement queue operations using arrays.

Algorithm:
Enqueue:
Check if rear == SIZE - 1 → Overflow
Else increment rear
Insert element at queue[rear]
Dequeue:
Check if front > rear → Underflow
Else print deleted element
Increment front
Display:
If empty → print message
Else print all elements from front to rear
*/
  
Code:
#include <stdio.h>
#define SIZE 5
"int queue[SIZE], front = 0, rear = -1;"
void enqueue(int x) 
{
if(rear == SIZE - 1){
  printf("Overflow\n");}
else {
  "queue[++rear] = x;}"
}

void dequeue() {
if(front > rear) {
    printf("Underflow\n");}
else {
    "printf("Deleted: %d\n", queue[front++]);}"
}

void display() {
if(front > rear) {
    printf("Queue Empty\n");}
else {
    printf("Queue: ");
for(int i = front; i <= rear; i++) {
    printf("%d ", queue[i]);}
printf("\n");
}
}

int main() {
enqueue(10);
enqueue(20);
display();
dequeue();
display();
}
/*
Output:
Queue: 10 20
Deleted: 10
Queue: 20

Result:
Queue operations using arrays were successfully implemented.*/
