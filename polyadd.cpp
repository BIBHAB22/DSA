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
void addpoly(struct list *start1,struct list *start2){
	struct list *start3=NULL;
	struct *p1=start1;
	struct *p2=start2;
	while(p1!=NULL && p2!=NULL){
		if(p1->exp>p2->exp){
			start3=insertEnd(p1->co,p1->exp,p1);
			p1=p1->next;
		}
		    
		else if(start1->exp<start2->exp){
			c=start2->co;e=start2->exp;start2=start2->next;}
		else{
			c=start1->co+start2->co;e=start1->exp;start1=start1->next;start2=start2->next;}
		}
		}
		}
	}
}
int main()
  {
  	struct list *start1=NULL,*start2=NULL,*n;
  	int i,co,exp;
  	
  	for(i=1;i<=4;i++)
  	  {
  	  	printf("Enter Co and exp:- ");
  	  	scanf("%d%d",&co,&exp);
  	  	fflush(stdin);
        start1=insertEnd(co,exp,start1);
	}
	for(i=1;i<=4;i++)
  	  {
  	  	printf("Enter Co and exp:- ");
  	  	scanf("%d%d",&co,&exp);
  	  	fflush(stdin);
        start2=insertEnd(co,exp,start2);
	}
	display(start1);	
	printf("\n");
	display(start2);
	return 1;
  }

