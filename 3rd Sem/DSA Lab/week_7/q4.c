#include<stdio.h>
#include<stdlib.h>

// Write a menu driven program to implement circular queue
// operations such as Enqueue, Dequeue, Peek, Display of elements,
// isEmpty, isFull using static array.

int Queue[10];
int front = -1, rear = -1, size=10;


void enqueue(int data){
	if ((front == 0 && rear == size-1) || (front == rear+1)) {
		printf("Queue Overflow\n");
		return;
	}
	if (front == -1) {
		front = 0;
		rear = 0;
	}
	else {
		if (rear == size - 1)
			rear = 0;
		else
			rear = rear + 1;
	}
	Queue[rear] = data ;
}
void dequeue(){
	if (front == -1) {
		printf("Queue Underflow\n");
		return;
	}
	printf("Element deleted is : %d ", Queue[front]);
	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else {
		if (front == size - 1)
			front = 0;
		else
			front = front + 1;
	}
}


void Peek(){
	if (front == -1) {
		printf("Queue Underflow\n");
		return ;
	}
	printf("Element peek is : %d ", Queue[front]);
}

void display(){
	int f = front, r = rear;
	if (front == -1) {
		printf("No number in the queue");
		return;
	}
	printf("Queue Contents :\n");
	if (f <= r) {
		while (f <= r){
			printf("%d\n", Queue[f]);
			f++;
		}
	}
	else {
		while (f <= size - 1) {
			printf("%d\n",Queue[f]);
			f++;
		}
		f = 0;
		while (f <= r) {
			printf("%d\n",Queue[f]);
			f++;
		}
	}
}  


int isEmpty(){
	return (front == -1);
}
int isFull(){
	return ((front == 0 && rear == size-1) || (front == rear+1));
}


int main(){
	int value,choice;


	while(1){
		
		printf("1. Add an item to the queue\n");
		printf("2. Delete an item from the queue\n");
		printf("3. Display the queue\n");
		printf("4. Exit\n");
		printf("Select an option:");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			printf("Enter a number: ");
			scanf("%d",&value);
			enqueue(value);
			
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("Wrong option");
		}
		printf("\n\n");
	}


	return 0;
}