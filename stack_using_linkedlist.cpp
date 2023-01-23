#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
}*head = NULL,*tail = NULL;

void push(int);
void pop();
void display();

int main(){
	int choice,item;
	printf("\n::Implementation of STACK using LINKED_LIST::\n");
	while(1){
	printf("\n****** MENU ******\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &item);
		 push(item);
		 break;
	 case 2: pop(); 
	 		break;
	 case 3: display(); 
	 		break;
	 case 4: exit(0);
	 		break;
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
   return 0;
}
void push(int item){
	struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data =item;
   newNode -> next = NULL;
   if(tail == NULL)
      head = tail = newNode;
   else{
      tail -> next = newNode;
      tail = newNode;
	}
}
void pop(){
    if(top==NULL){
		cout<<"Error: Stack Underflow!!"<<endl;
		return;
	}
	Node* toBeDeleted = top;
	top = top->next;
	delete toBeDeleted;
}
void display(){
   if(head == NULL)
      printf("\nstack is Empty!!!\n");
   else{
      struct Node *temp =head;
      while(temp->next!= NULL){
		printf("%d",temp->data);
		temp=temp->next;
      }
   }
} 
