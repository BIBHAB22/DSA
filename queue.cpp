#include<stdio.h>
#define size 5
int arr[size];
int front=-1;
int rear=-1;
int isempty(){
	if(front==rear)
		return 1;
	return 0;
}
int isfull(){
	if(rear==size-1)
		return 1;
	return 0;
}
void insert(int item){
	if(isfull()){
		printf("Error overflow\n");
		return;
	}
	rear++;
	arr[rear]=item;
	}
	int del(){
		int x;
		if(isempty()){
			printf("Error underflow\n");
			return -9999;
		}
		front++;
		x=arr[front];
		return x;
	}
	int peek(){
		if(isempty()){
			printf("Error undeflow\n");
			return -9999;
		}
		int x=arr[front+1];
		return x;
	}
	void display(){
		if(isempty()){
			printf("Error underflow");
			return;
		}
		for(int i=front+1;i>=0;i--)
			printf("%d",arr[i]);
	}
	int main(){
	int d,ch;
	do
	{
		printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
		printf("Enter the choice:-");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the number:-");
				scanf("%d",&d);
				insert(d);
				break;
			case 2:del();
				break;	
			case 3:if(peek()==-1)
				printf("underflow");
				else
				printf("top element=%d",peek);
				break;
			case 4:display();
				break;
			case 5:printf("\n thank you");
				break;
			default:
				printf("invalid choice");
		}
	}while(ch!=5);
	return 0;
}
