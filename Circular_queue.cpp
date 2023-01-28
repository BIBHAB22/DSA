#include<stdio.h>
#include<stdlib.h>
#define n 5
int arr[n];
int front=-1;
int rear=-1;
int isFull(){
    if (front == 0 && rear == n - 1) {
      return 1 ;
    }
    if (front == rear + 1) {
      return 1;
    }
    return 0;
}
int isEmpty(){
    return front==-1;
}
void insert(int item){
    if(isFull()){
        printf("Queue is full");
        return;
    }
    if(rear==-1&&front==-1){
        front=0;
        rear=0;
    }
    arr[rear]=item;
    rear = (rear+1)%n;
}
void del(){
    if(isEmpty()){
        printf("Queue Underflow");
        front=-1;
        rear=-1;
        return;
    }
    front = (front+1)%n;
}

void display(){
    if(isEmpty()){
        printf("Queue Underflow");
        return;
    }
    for (int i = front; i != rear; i = (i + 1) % n){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int target = 100;
    while(target != 0){
        printf("1.Insert\n2.Del\n3.Display\n4.isFull\n5.isEmpty\n0.Quit\n");
        printf("Enter any option: ");
        scanf("%d",&target);
        switch (target)
        {
        case 1:
            int element;
            printf("Enter the element to push into Queue:" );
            scanf("%d",&element);
            insert(element);
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            if(isFull()){
                printf("Queue is full");
            }
            else{
                printf("We still have memory to insert elements");
            }
            break;
        case 5:
            if(isEmpty()){
                printf("Queue is empty");
            }
            else{
                printf("Queue has some values into it");
            }
            break;
        case 0:
            break;
        }
    }
    return 0;
}
