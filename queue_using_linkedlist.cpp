#include<stdio.h>
#include<stdlib.h>
struct node* front=NULL;
struct node* rear=NULL;
void insert(int item){
	struct node* curr=(struct node*)malloc(sizeof(struct node));
	if(rear==NULL){
		printf("queue is empty");
		return;
	}
	curr->data=item;
	if(rear==NULL){
		curr->next=NULL;
		front=rear=curr;
	}
	else{
		curr->next=NULL;
		rear->next=curr;
		rear=curr;
	}
	}
int isEmpty(){
	if(front==rear==NULL){
		return 1;
	}
	return 0;
}
void del(){
	if(isEmpty()){
		printf("queue is empty");
		return;
	}
	if(front->next==NULL){
		free(front);
		front=rear=NULL;
	}
	else{
		node* temp=front;
		front=front->next;
		free(temp);
	}
}
int main(){
int target=100;
    while(target != 0){
        printf("1.Insert\n2.Is empty\n3.Delete\n4.Display\n0.Quit\n");
        printf("Enter any option:");
        scanf("%d",&target);
        switch (target)
        {
        case 1:
            int val;
            printf("Enter the value to be inserted:");
            scanf("%d",&val);
            insert(val);
            break;
        case 2:
            isEmpty();
            break;
        case 3:
            del();
            break;
        case 4:
            display();
            break;
        case 0:
            break;
    	}
        }
    return 0;
}
