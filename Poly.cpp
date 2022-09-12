#include<stdio.h>
#include<malloc.h>
struct list{
	int co,exp;
	struct list *next;
};
struct list *create(int c,int e)
	{
		struct list*n;
		n=(struct list*)malloc(sizeof(struct list));
		n->co=c;
		n->exp=e;
		n->next=NULL;
		return n;
	}
struct list*  insertEnd(int c,int e,struct list*start)
	{
		struct list *n,*ptr;
		n=create(c,e);
		if(start==NULL){
			start=n;
			}
		else{
			for(ptr=start;ptr->next!=NULL;ptr=ptr->next);
			ptr->next=n;
		}
		return start;
	}
void display(struct list *start){
	if(start==NULL){
		printf("empty list");
	
	}
	struct list *ptr=start;
	while(ptr!=NULL){
		printf("%d X^%d ",ptr->co,ptr->exp);
		ptr=ptr->next;
	}
	printf("\n");
}
int main()
  {
  	struct list *start1,*start2,*n;
  	int i,co,exp;
  	
  	for(i=1;i<=4;i++)
  	  {
  	  	printf("Enter Co and exp:- ");
  	  	scanf("%d%d",&co,&exp);
        start1=insertEnd(co,exp,start1);
	}
	display(start1);	
	return 1;
  }
