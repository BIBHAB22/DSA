#include<stdio.h>
#define size 5
int arr[size];
int top=-1;
int isempty(){
	if(top==-1)
		return 1;
	return 0;
}
int isfull(){
	if(top==size-1)
		return 1;
	return 0;
}
void push (int item){
	if(top==size-1){
		printf("stack is full\n");
	return ;
	}
	top++;
	arr[top]=item;
	return;
}
void pop(){
	if(isempty()){
		printf("stack is empty\n");
	return;
	}
int x=arr[top];
	top--;
	printf("%d",x);
	printf("\n");
}
int peek(){
	if (isempty()){
		printf("stack is empty\n");
	}	
int x=arr[top];
	printf("%d",x);
	return arr[top];
}
void display(){
	int i;
	if(top==-1)
	printf("stack is empty\n");
	else{
		for(i=top;i>=0;i--)
		printf("%d",arr[i]);
	}
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
				push(d);
				break;
			case 2:pop();
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
