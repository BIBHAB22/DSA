#include<stdio.h>
#include<stdlib.h>
struct list{
	int data;
	struct list *next;
};
struct list *start=NULL;
struct list *create(int item){
	struct list *n;
	n=(struct list*)malloc(sizeof(struct list));
	n->data=item;
	n->next=NULL;
	return n;
}
void addbeg(int item){
	struct list *n;
	n=create(item);
	if(start=NULL)
		start=n;
	else{
		n->next=start;
		start=n;
	}
}
void addend(int item){
	struct list *n, *ptr;
	n= create(item);
	if(start==NULL)
	{
	start=n;
	return;
	}
	else{
		for(ptr=start;ptr->next!=NULL;ptr=ptr->next);
		ptr->next=n;
	}
	
}
int main(){
	int d,ch;
	do
	{
		printf("1.addbeg\n2.addend\n3.show\n4.delbeg\n5.delend\n");
		printf("Enter the choice:-");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the number:-");
				scanf("%d",&d);
				addbeg(d);
				break;
			case 2:printf("Enter the number:-");
				scanf("%d",&d);
				addend(d);
				break;	
			case 3:show();
				break;
			//case 4:delbeg(d);
				break;
			//case 5:delend(d);
				break;
			case 6:printf("\n thank you");
				break;
			default:
				printf("invalid choice");
		}
	}while(ch!=6);
	return 0;
}
